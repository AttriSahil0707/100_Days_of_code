/*
Q16 (Conditional Statements)
Write a program to input three numbers and find the largest among them using if–else.

*/

#include <stdio.h>
int main(){

    int x,y,z;

    // Take input from user
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&x,&y,&z);

    // Check conditions
    if (x>y && x>z)
     printf("Largest is %d",x);
    else if(y>z && y>x) 
     printf("Largest is %d",y);
    else if (z>x && z>y)
     printf("Largest is %d",z); 
    else printf("Error! numbers are same"); 
   
 return 0;   
}
