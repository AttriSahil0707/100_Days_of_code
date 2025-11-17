/*
Q136 (Enum)
Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.*/

#include <stdio.h>
#include <string.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    char op[20];
    int a, b;
    enum Menu choice;

    printf("Enter operation (ADD / SUBTRACT / MULTIPLY): ");
    scanf("%s", op);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(strcmp(op, "ADD") == 0)
        choice = ADD;
    else if(strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else
        choice = MULTIPLY;

    switch(choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
