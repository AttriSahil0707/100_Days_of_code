/*
  Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time.

*/

#include <stdio.h>
#include <math.h>

int main(){
    /* Princial interest = p
       Rate of interest = r
       time in years = t
    */
   float p,r,t; 

   // si is simple interest and ci is compound interest
   float si,ci;
   // Take input from user
   printf("Enter principal,Rate and time:");
   scanf("%f %f %f",&p,&r,&t);
   
   // calculating si and ci

   si = (p*r*t)/100;
   ci = p * pow((1 + r/100),t) - p;
   //Display output

   printf("Simple interest =%f, Compound interest =%f",si,ci);

    return 0;
}
