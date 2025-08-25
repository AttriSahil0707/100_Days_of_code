/*
Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable.
*/

#include <stdio.h>

int main() {
    int a, b, temp;

    // input from user
    printf("Enter Both numbers: ");
    scanf("%d %d", &a,&b);
    
    // swapping using third variable
    temp = a;
    a = b;
    b = temp;

    // show after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
