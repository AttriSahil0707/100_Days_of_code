/*Q98 (Strings)
Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len, lastSpace = -1;

    printf("Enter full name: ");
    gets(name);

    len = strlen(name);

    for(i = 0; i < len; i++) {
        if(name[i] == ' ')
            lastSpace = i;
    }

    if(name[0] != ' ')
        printf("%c. ", name[0]);

    for(i = 0; i < lastSpace; i++) {
        if(name[i] == ' ' && name[i + 1] != ' ' && i + 1 < lastSpace)
            printf("%c. ", name[i + 1]);
    }

    for(i = lastSpace + 1; i < len; i++)
        printf("%c", name[i]);

    return 0;
}
