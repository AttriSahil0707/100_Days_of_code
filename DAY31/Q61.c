/*Q61 (Arrays (1D))
Search for an element in an array using linear search.
*/

#include <stdio.h>
int main() {
    int n, i, key, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }
    if(found == 1)
        printf("Element found at position %d\n", i + 1);
    else
        printf("Element not found\n");
    return 0;
}
