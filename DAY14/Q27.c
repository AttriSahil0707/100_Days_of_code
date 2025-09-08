/*Q27 (Loops without Arrays/Strings)
Write a program to print the sum of the first n odd numbers.

*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop through first n odd numbers
    for (i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);   // odd numbers formula: 1,3,5... = 2*i - 1
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
