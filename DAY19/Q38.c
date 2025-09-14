/*Q38 (Loops without Arrays/Strings)
Write a program to find the sum of digits of a number.

*/

#include <stdio.h>
int main(){
    int num,digit,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num < 0) {
        num = -num; 
    }

 
    while (num > 0) {
        digit = num % 10;     
        sum += digit;         
        num /= 10;            
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
