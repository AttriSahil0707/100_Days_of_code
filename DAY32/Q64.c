/*Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>
int main() {
    long long num;
    int count[10] = {0}, digit, max = 0, most = 0;
    printf("Enter a number: ");
    scanf("%lld", &num);
    if(num < 0)
        num = -num;
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }
    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            most = i;
        }
    }
    printf("Digit that occurs the most times = %d\n", most);
    return 0;
}
