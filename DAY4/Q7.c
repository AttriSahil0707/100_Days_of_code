/*
  Q.7 (User Inputs, Operations & Output)
Write a program to swap two numbers without using a third variable.
*/

#include <stdio.h>

int main() {
    int a, b;

    // take input from user
    printf("Enter numbers: ");
    scanf("%d %d", &a, &b);

    // swapping without third variable
    a += b;
    b = a - b;
    a -= - b;

    // after swapping
    printf("After swapp: %d %d\n", a , b);

    return 0;
}
