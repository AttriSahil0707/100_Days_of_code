/*Q92 (Strings)
Find the first repeating lowercase alphabet in a string.*/
#include <stdio.h>
int main() {
    char str[200];
    int i, freq[26] = {0}, found = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c", str[i]);
                found = 1;
                break;
            }
        }
    }

    if(!found)
        printf("No repeating lowercase alphabet found");

    return 0;
}
