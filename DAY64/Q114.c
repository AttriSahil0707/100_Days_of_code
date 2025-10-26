/* Q114 (Logic Enhancers)
Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int n = strlen(s), i, j, start = 0, max = 0;
    int index[256];
    for(i = 0; i < 256; i++) index[i] = -1;
    for(i = 0; i < n; i++) {
        if(index[s[i]] >= start) start = index[s[i]] + 1;
        index[s[i]] = i;
        if(i - start + 1 > max) max = i - start + 1;
    }
    printf("%d", max);
    return 0;
}
