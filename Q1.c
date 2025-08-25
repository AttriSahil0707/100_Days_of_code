/*Q1 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum.


*/

#include <stdio.h>

int main(){
    int a,b,sum;

    // Input two numbers
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    // Calculate sum
    sum = a + b;
    // Display result
    printf("Sum = %d",sum);
  return 0;
}