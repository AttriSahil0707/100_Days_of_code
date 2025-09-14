/*Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number.

*/
#include <stdio.h>
#include <math.h>   

int main() {
    int num, count = 0,sum=0;
    

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;
    int temp = num;

    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = num; 

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}
