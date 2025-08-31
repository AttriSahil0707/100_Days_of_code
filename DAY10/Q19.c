/*
Q19 (Conditional Statements)
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/

#include <stdio.h>

int main() {
    int a, b, c;

    // Input side lengths
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // check if triangle is valid
    if (a + b > c && a + c > b && b + c > a) {
        // Classify triangle
        if (a == b && b == c) {
            printf("Equilateral.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles.\n");
        }
        else {
            printf("Scalene.\n");
        }
    }
    else {
        printf("The given sides do not form a triangle.\n");
    }

    return 0;
}
