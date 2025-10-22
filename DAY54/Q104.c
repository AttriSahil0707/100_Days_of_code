/*
Q104 (Logic Enhancers)
Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. 
Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.*/

#include <stdio.h>
int main() {
    int n, x, sumLeft, sumRight, i;
    int pivot = -1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++) {
        sumLeft = 0;
        sumRight = 0;

        for(i = 1; i <= x; i++)
            sumLeft += i;

        for(i = x; i <= n; i++)
            sumRight += i;

        if(sumLeft == sumRight) {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}
