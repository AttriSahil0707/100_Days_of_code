/*🔤
Q108 (Logic Enhancers)
Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/

#include <stdio.h>

int main() {
    int nums[100], answer[100], n, i, j, prod;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++) {
        prod = 1;
        for(j = 0; j < n; j++) {
            if(i != j)
                prod *= nums[j];
        }
        answer[i] = prod;
    }

    printf("Resultant array: ");
    for(i = 0; i < n; i++) {
        if(i == n - 1)
            printf("%d", answer[i]);
        else
            printf("%d, ", answer[i]);
    }

    return 0;
}
