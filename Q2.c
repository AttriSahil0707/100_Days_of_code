/*Q2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient.


*/

#include <stdio.h>

int main(){
    int a,b,sum,diff,product,quotient;

    //input Two numbers
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    //Calculating Their sum difference product and quotient
    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;
    
    //Display Their sum difference product and quotient
    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d",sum,diff,product,quotient);

    return 0;
}