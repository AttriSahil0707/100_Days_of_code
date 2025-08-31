/*
   Q12 (Conditional Statements)
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

*/
#include <stdio.h>
int main (){
    int a;

    // Here we will take input

    printf("Enter a number:");
    scanf("%d",&a);

    // Using if else conditions
    
    if (a >= 0){
     if (a == 0){ printf("The number is zero");
     } else printf("The number is positive");}
    else{ printf("The number is negative") ;}
     return 0;
}
