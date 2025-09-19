/*Q54 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int i, j, spaces, stars;

    // Upper half including middle line (1 to 4)
    for (i = 1; i <= 4; i++) {
        spaces = 4 - i;
        stars = 2 * i - 1;

        // Print spaces
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half (3 to 1)
    for (i = 3; i >= 1; i--) {
        spaces = 4 - i;
        stars = 2 * i - 1;

        // Print spaces
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
