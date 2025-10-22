/*
Q93 (Strings)
Check if two strings are anagrams of each other.*/

#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int i, freq1[26] = {0}, freq2[26] = {0}, flag = 0;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i] - 'a']++;
        else if(str1[i] >= 'A' && str1[i] <= 'Z')
            freq1[str1[i] - 'A']++;
    }

    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i] - 'a']++;
        else if(str2[i] >= 'A' && str2[i] <= 'Z')
            freq2[str2[i] - 'A']++;
    }

    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Strings are anagrams");
    else
        printf("Strings are not anagrams");

    return 0;
}
