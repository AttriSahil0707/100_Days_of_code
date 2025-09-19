/*Q53 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int i, j, stars;

    // Upper part of the pattern (1 to 5 lines)
    for (i = 1; i <= 5; i++) {
        stars = 2 * i - 1;  // 1, 3, 5, 7, 9
        for (j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the pattern (4 to 1 lines)
    for (i = 4; i >= 1; i--) {
        stars = 2 * i - 1;  // 7, 5, 3, 1
        for (j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
