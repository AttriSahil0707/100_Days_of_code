/*Q111 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right.
If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
*/

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid window size");
        return 0;
    }

    for(i = 0; i <= n - k; i++) {
        found = 0;
        for(j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if(found == 0)
            printf("0 ");
    }

    return 0;
}
