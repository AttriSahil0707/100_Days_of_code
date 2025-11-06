/*Q123 (File Handling)
Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/
Here’s the **beginner-level C program (without comments)** for **Q123 (File Handling)**:

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n')
            lines++;
        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
