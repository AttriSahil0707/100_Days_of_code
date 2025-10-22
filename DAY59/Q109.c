/*Q109 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, sum, maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid subarray size");
        return 0;
    }

    maxSum = -1000000;

    for(i = 0; i <= n - k; i++) {
        sum = 0;
        for(j = i; j < i + k; j++)
            sum += arr[j];
        if(sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of subarray of size %d: %d", k, maxSum);

    return 0;
}
