/*Q28 (Loops without Arrays/Strings)
Write a program to print the product of even numbers from 1 to n.
*/
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;   // use long long for large results

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: ", n);

    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
        product = product * i;
    }

    printf("\nProduct of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
