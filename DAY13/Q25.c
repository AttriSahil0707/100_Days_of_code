/*
Q25 (Conditional Statements)
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

*/
#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);   // space before %c to avoid newline issue

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result = %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %d\n", result);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %d\n", num1 / num2);
            else
                printf("Error! Division by zero not allowed.\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Result = %d\n", num1 % num2);
            else
                printf("Error! Modulo by zero not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
