/*Q100 (Strings)
Print all sub-strings of a string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            for(k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }

    return 0;
}
