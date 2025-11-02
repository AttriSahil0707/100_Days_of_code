/*Q120 (Logic Enhancers)
Write a program to take a string input. Change it to sentence case.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int i=0;
    while(str[i]!='\0') {
        if(i==0 && isalpha(str[i])) str[i]=toupper(str[i]);
        else str[i]=tolower(str[i]);
        i++;
    }
    printf("%s", str);
    return 0;
}
