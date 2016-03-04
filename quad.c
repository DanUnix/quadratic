// Author: Daniel Pulley
// Date: March 4th, 2016
// Description: A Basic Quadractic Equation Solver

// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Helper Functions*/
// Returns the discriminant
double discriminant(double a, double b, double c)
{
    // Square variable b
    b = pow(b, 2);
    // value of the radicand -> ((b^2)-4ac)
    double radicand = ((b)-((4)*(a)*(c)));
    double result = (double)sqrt(radicand);
    return result;
}
/*End of Helper Functions*/

// Main Function 
int main(int argc, char* argv[])
{
    double a,b,c;
    double dis,x1,x2; 
    // if the number of args suffice
    if(argc == 4){
        // Argument 1 is a
        // Utilize atoi function to convert to int then cast int to double
        a = (double)atoi(argv[1]);
        // Argument 2 is b
        b = (double)atoi(argv[2]);
        // Argument 3 is c
        c = (double)atoi(argv[3]);

        printf("Your Variables\n");
        printf("--------------\n");
        printf("a: %lf b: %lf c: %lf\n",a,b,c);

        dis = discriminant(a,b,c);  
    
    // Quadratic Equation has two answers
    x1 = (double)((b + dis)/(2*a));
    x2 = (double)(((-b) - dis)/(2*a));

    // Print out results
    printf("X1: %lf X2: %lf \n", x1, x2);
    // else get user input
    }else{

    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);    
    
    // Get the discriminant    
    dis = discriminant(a,b,c);

    // Quadratic Equation has two answers
    x1 = (double)((b + dis)/(2*a));
    x2 = (double)(((-b) - dis)/(2*a));

    // Print out results
    printf("X1: %lf X2: %lf \n", x1, x2);
    }
}
// End of Main Function
