/*
   Q11 (Conditional Statements)
Write a program to input an integer and check whether it is even or odd using if–else.

*/
#include <stdio.h>
int main(){
    int a;
    //Here we will take input
    printf("Enter a number:");
    scanf("%d",&a);
// Here for even nummber it should be divisible with 2 
    if (a % 2==0)
    {
        printf("%d Is Even",a);
    }
    else printf("%d Is Odd",a);


    return 0;
}
