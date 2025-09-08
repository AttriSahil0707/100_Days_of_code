/*
Q21 (Conditional Statements)
Write a program to display the month name and number of days using switch-case for a given month number.

*/
#include <stdio.h>

int main() {
    int monthNumber;

    // Prompt the user for input
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    // Use a switch statement to determine the month and its days
    switch (monthNumber) {
        case 1:
            printf("Month: January\n");
            printf("Number of days: 31\n");
            break;
        case 2:
            printf("Month: February\n");
            printf("Number of days: 28 or 29 (in a leap year)\n");
            break;
        case 3:
            printf("Month: March\n");
            printf("Number of days: 31\n");
            break;
        case 4:
            printf("Month: April\n");
            printf("Number of days: 30\n");
            break;
        case 5:
            printf("Month: May\n");
            printf("Number of days: 31\n");
            break;
        case 6:
            printf("Month: June\n");
            printf("Number of days: 30\n");
            break;
        case 7:
            printf("Month: July\n");
            printf("Number of days: 31\n");
            break;
        case 8:
            printf("Month: August\n");
            printf("Number of days: 31\n");
            break;
        case 9:
            printf("Month: September\n");
            printf("Number of days: 30\n");
            break;
        case 10:
            printf("Month: October\n");
            printf("Number of days: 31\n");
            break;
        case 11:
            printf("Month: November\n");
            printf("Number of days: 30\n");
            break;
        case 12:
            printf("Month: December\n");
            printf("Number of days: 31\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
