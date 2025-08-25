/*
  Q10 (User Inputs, Operations & Output)
Write a program to input time in seconds and convert it to hours:minutes:seconds format.

*/

#include <stdio.h>
int main(){
    // Here totalsec is seconds given for calculating it into hours minutes and seconds
    int totalsec;
    int sec,hrs,min;
    printf("Enter total time in seconds:");
    scanf("%d",&totalsec);
  
    // Calculating hours minutes and seconds from total

    hrs = totalsec / 3600; // 1 hour is equal to 3600 seconds
    min = (totalsec % 3600)/60; // remaining minutes
    sec = totalsec % 60;  //remaining seconds

    // now display time in hours:minutes:Seconds

    printf("%d:%d:%d",hrs,min,sec);

    return 0;
}