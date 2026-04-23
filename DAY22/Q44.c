/*Q44 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 1, denominator = 2;

    printf("Enter the numberffd mjff ccof terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;     
        denominator += 2;   
    }

    // Output the result
    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
