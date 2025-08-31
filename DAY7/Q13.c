/*
   Q13 (Conditional Statements)
Write a program to input a year and check whether it is a leap year or not using conditional statements.

*/

#include <stdio.h>
int main (){
    int year;

    // Taking a input year

    printf("Enter a year:");
    scanf("%d",&year);

    // Applying if else condition

    if (year % 400==0 )
        printf("Leap year");
    else if (year % 100==0)
      printf("Not a leap year");
    else if (year % 4 ==0)
      printf("Leap year");
    else printf("Not a leap year");
    
    return 0;
    

}
