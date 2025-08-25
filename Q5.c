/*Q5 (User Inputs, Operations & Output)
Write a program to convert temperature from Celsius to Fahrenheit.


*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Ask the user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Formula: (C × 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Show the result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
