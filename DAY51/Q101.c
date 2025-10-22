/*Q101 (Logic Enhancers)
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated.
You need to print the first and last occurrence of the target and print the index of first and last occurrence.
Print -1, -1 if the target is not present.*/

#include <stdio.h>
int main() {
    int nums[100], n, target;
    int i, first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target element: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        if(nums[i] == target) {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    if(first == -1)
        printf("-1, -1");
    else
        printf("First occurrence: %d, Last occurrence: %d", first, last);

    return 0;
}
