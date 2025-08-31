/*
Q17 (Conditional Statements)
Write a program to find the roots of a quadratic equation and categorize them.

*/

#include <stdio.h>
#include <math.h>
int main (){

    float x,y,z,d,r1,r2;
    printf("Enter 3 numbers: ");
    scanf("%f %f %f",&x,&y,&z);
    
    d = (y*y)- (4*(x*z));

    // Conditions for roots
    if (d > 0) {
        // Real and distinct
        r1 = (-y + sqrt(d)) / (2 * x);
        r2 = (-y - sqrt(d)) / (2 * x);
        printf("Roots are real and different:%.2f %.2f\n",r1,r2);

    }
    else if (d == 0) {
        // Real and equal
        r1 = r2 = -y / (2 * x);
        printf("Roots are real and equal: %.2f\n",r1);
        
    }
    else {
        // Imaginary roots
        printf("Roots are complex.\n");
    }

    return 0;

}
