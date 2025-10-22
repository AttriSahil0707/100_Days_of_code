/*Q70 (Arrays (1D))
Rotate an array to the right by k positions.
*/

#include <stdio.h>
int main() {
    int n, k, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n], temp[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    k = k % n;
    for(i = 0; i < n; i++)
        temp[(i + k) % n] = a[i];
    printf("Array after rotation: ");
    for(i = 0; i < n; i++)
        printf("%d ", temp[i]);
    return 0;
}
