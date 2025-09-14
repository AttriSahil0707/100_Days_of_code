/*Q34 (Loops without Arrays/Strings)
Write a program to check if a number is prime.

*/

#include <stdio.h>
int main(){
    int a,isPrime=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a <= 1) {
        printf("%d is NOT a prime number.\n", a);
        return 0;
    }

    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            isPrime = 0;   
            break;
        }
    }

    if (isPrime)
        printf("%d is Prime number.\n", a);
    else
        printf("%d is NOT Prime number.\n", a);

    return 0;

}
