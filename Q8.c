/*
  Q8 (User Inputs, Operations & Output)
Write a program to find and display the sum of the first n natural numbers.

*/

#include <stdio.h>
int main(){
    int n,sum;
    // Take input from user
    printf("Enter a positive integer n:");
    scanf("%d",&n);
    // Formula for calculating sum of n natural numbers
    
    sum = n*(n+1)/2;
    // Display Output

    printf("Sum of %d first natural number = %d",n,sum);



    return 0;
}