/*Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number.

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, middle, swappedNum;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num >= 0 && num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    last = num % 10;

    digits = (int)log10(num);

    first = num / (int)pow(10, digits);

    middle = num % (int)pow(10, digits); 
    middle = middle / 10;            

    swappedNum = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}
