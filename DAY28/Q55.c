/*Q55 (Nested Loops without Arrays/Strings)
Write a program to print all the prime numbers from 1 to n.
*/

#include <stdio.h>

int main() {
    int n, i, j, Prime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        Prime = 1; 

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                Prime = 0; 
                break;
            }
        }

        if (Prime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
