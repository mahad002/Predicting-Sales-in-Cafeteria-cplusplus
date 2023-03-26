#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <fstream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <string>
#include <cmath>
#include <time.h>
#include <cctype>

using namespace std;


struct Customer{
    int cust_No;
    int C_Gender;
    int age;
   };

void Local_min(Customer *Cus, double *y, double Q0, double Q1, double Q2, int n, int i)
{
    double a=0.00001;
    double Fx, Fx1, Fx2;
    Fx = y[i]-(Q0+(Q1*Cus[i].age)+(Q2*Cus[i].C_Gender));
    Fx1 = Fx * Cus[i].age;
    Fx2 = Fx * Cus[i].C_Gender;
    if(i==n)
    {
        cout<<"----------------------------------------------\n";
        cout<<"Q0\t\tQ1\t\tQ2\n";
        cout<<"----------------------------------------------\n";
        cout<<fixed<< Q0 <<"\t"<< Q1 <<"\t"<< Q2 << endl<<endl;
        cout<<"----------------------------------------------\n";
        //cout<<"y-intercept: "<< Q0 + Q1 * Cus[17].age << endl;
        //cout<<"----------------------------------------------\n";
        return;
    }
    else
    {
        Q0 = Q0 + (a * Fx);
        Q1 = Q1 + ((a * Fx1)* Cus[i].age);
        Q2 = Q2 + ((a * Fx2)* Cus[i].C_Gender);
    }
    Local_min(Cus,y,Q0,Q1,Q2,n,++i);
}



int main() {
//for Sales and Age Final Values
    //double c = 96.56226130653263;
    //double m = 0.34605528;

    //for Sales, Age and Gender Final Values
    //double c = 96.60499230111203;
    //double m1 = 0.33692472;
    //double m2 = 0.29071685;

    Customer customers[30];
    double sales[30];
    ifstream file_customers;
    file_customers.open("Customers.txt");
    ifstream file_sales;
    if(file_customers){
        cout<<"Reading from File"<<endl;
        int index = 0;
        string cust_no, gender, age;
        while(!file_customers.eof() and index < 30){
            getline(file_customers, cust_no, ',');
            getline(file_customers, gender, ',');
            getline(file_customers, age, '\n');
            customers[index].cust_No = stoi(cust_no);
            customers[index].C_Gender = stoi(gender);
            customers[index].age = stoi(age);
            index++;
        }
        file_customers.close();
        file_sales.open("Sales.txt");
        if(file_sales){
            index = 0;
            string sale;
            while(!file_sales.eof() and index < 30){
                getline(file_sales, sale, '\n');
                sales[index] = stod(sale);
                index++;
            }
            file_sales.close();
            cout<<"Data Inserted"<<endl;
        }
        Local_min(customers,sales,0,0,0,30,0);
    }
    else{
        cout<<"File unable to open"<<endl;
    }
return 0;
}
