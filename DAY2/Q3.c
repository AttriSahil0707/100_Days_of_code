/*Q3 (User Inputs, Operations & Output)
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


*/

#include <stdio.h>

int main(){
    int a,b,area,peri;

    // Input Length and breadth
    printf("Enter Length and Breadth of rectangle:");
    scanf("%d %d",&a,&b);
    // Calculating area and perimeter
    area = a * b;
    peri = 2*(a+b);

    // Display Area and Perimeter    
    printf("Area = %d\nPerimeter = %d",area,peri);

    return 0;
}
