/*
  Q14 (Conditional Statements)
Write a program to input a character and check whether it is a vowel or consonant using if–else.

*/

#include <stdio.h>
int main(){

   // Here we will enter input
   // char mean character eg(a,b,c..)
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    
    if (x == 'a'|| x =='e'|| x=='i'|| x=='o'|| x=='u' || x=='A' || x=='E' || x== 'I' || x== 'O'|| x== 'U')
    {
        printf("Vowel");
    }
    else printf("Constant");
}
