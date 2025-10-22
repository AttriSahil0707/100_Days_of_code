/*
Q91 (Strings)
Remove all vowels from a string.
*/
#include <stdio.h>
int main() {
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
           str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("String without vowels: %s", result);

    return 0;
}
