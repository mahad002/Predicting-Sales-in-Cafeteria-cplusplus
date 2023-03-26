# Predicting-Sales-in-Cafeteria-cplusplus
Sales prediction in a cafeteria readme for more details

You are required to enhance the FAST Cafeteria application (Problem 2) to help Cafeteria improve their future sales. 
This will be done by a prediction algorithm which will predict an output
given an input (for example, input age and output can be a particular food item). You will need to generate data of at
least 30 sales. Since, each sales data consists of sales person, customer and food item(s).
One of the simplest supervised learning algorithms is Linear regression. It fits a straight line (h(x) = θo + θ1x1) through
data points. For example, in the graph below X is input variable (there can be multiple input variables) and Y is the
output variable. The goal of linear regression is to fit a line through these data points which is the most representative
of the data. This is done by minimizing the cost function which measures the root mean-squared error between the
predicted output value – h(x) and true output value – Y. For the given h(x), this will be done by finding the best value
of θ1.

Gradient descent method is an iterative algorithm for finding the local minimum of a function. In h(x), θj are the
parameters mapping X to Y. Your goal is it to implement Gradient descent as a recursive function to find the best
approximation by updating θj. You will keep on repeating the following until convergence. It will be done for all θj. For
the above equation you need to do it only for θ1 as h(x) is only a linear function of x1.

You can find more detail on gradient descent at http://cs229.stanford.edu/notes2021fall/cs229-notes1.pdf (Page 3
to 7). An example is also given in these notes, where Y – Price (is the output) and X – Living area and bedrooms (are

the inputs). This shows that Y can depend on multiple inputs. So the θj is a two dimensional vector for the inputs Area
(x1) and No. of bedrooms (x2).
In this scenario Y (output) is sales. You will display different attributes that can be picked as input (X), for example X
can be: (Age) or (Age and Gender) or (fooditem) or (fooditem and Gender). You will have to display the graph
showing 30 data points.
Extra Credit: For displaying the regression line through data points.
