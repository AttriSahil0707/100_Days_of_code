/*Q40 (Loops without Arrays/Strings)
Write a program to find the 1’s complement of a binary number and print it.

*/

#include <stdio.h>

int main() {
    int binary, onesComplement = 0,place = 1, bit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    if (binary == 0) {
        printf("1's complement: 1\n");
        return 0;
    }

    while (binary > 0) {
        bit = binary % 10;      

        if (bit == 0)
            onesComplement += 1 * place;
        else
            onesComplement += 0 * place;

        place *= 10;            
        binary /= 10;          
    }
    printf("1's complement: %lld\n", onesComplement);

    return 0;
}
