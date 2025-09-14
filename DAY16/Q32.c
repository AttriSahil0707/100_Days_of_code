/*Q32 (Loops without Arrays/Strings)
Write a program to check if a number is a palindrome.

*/
#include <stdio.h>

int main() {
    int num, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   

    while (num > 0) {
        digit = num % 10;         
        rev = rev * 10 + digit;   
        num = num / 10;           
    }

    if (original == rev)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is NOT a Palindrome number.\n", original);

    return 0;
}
