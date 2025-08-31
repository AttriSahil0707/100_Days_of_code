/*

Q15 (Conditional Statements)
Write a program to input a character and check whether it is an uppercase alphabet, 
lowercase alphabet, digit, or special character.
*/

#include <stdio.h>
int main (){
    char x;

    // Here we will take input
    printf("Enter a character: ");
    scanf("%c",&x);

    // Check Condition
    if (x >= 'a' && x <='z')
    {
        printf("Lowercase Alphabet.");
    }
    else if (x >='A' && x <= 'Z')
       printf("Uppercase Alphabet.");
    else if (x >='0' && x <= '9')
      printf("Digit");
    else 
    printf("Special character");
    
    return 0;
}
