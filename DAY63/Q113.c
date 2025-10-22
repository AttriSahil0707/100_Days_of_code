/*Q113 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array.
Print the kth smallest element as output.*/

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    if(k < 1 || k > n) {
        printf("Invalid value of k");
        return 0;
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The %dth smallest element is: %d", k, arr[k - 1]);

    return 0;
}
