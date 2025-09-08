/*Q30 (Loops without Arrays/Strings)
Write a program to reverse a given number.

*/
#include <stdio.h>

int main() {
    int num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;           // take last digit
        rev = rev * 10 + digit;     // build reversed number
        num = num / 10;             // remove last digit
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
