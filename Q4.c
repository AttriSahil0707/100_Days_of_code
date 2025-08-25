/*Q4 (User Inputs, Operations & Output)
Write a program to calculate the area and circumference of a circle given its radius.


*/

#include <stdio.h>
// defining the constant value of π
#define PI 3.14159   

int main() {
    float radi, area, circum;

    // Input radius of circle from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radi);

    // Calculating area and circumference of circle
    area = PI * radi * radi;
    circum = 2 * PI * radi;

    // Display outpput area and circumference
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circum);

    return 0;
}
