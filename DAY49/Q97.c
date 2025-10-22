/*
Q97 (Strings)
Print the initials of a name.*/

#include <stdio.h>
int main() {
    char name[100];
    int i;

    printf("Enter a full name: ");
    gets(name);

    if(name[0] != ' ')
        printf("%c", name[0]);

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c", name[i + 1]);
    }

    return 0;
}
