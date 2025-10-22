/*
  Q66: Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>
int main() {
    int n, x, i, pos;

    scanf("%d", &n);
    int arr[100];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    pos = 0;
    while(pos < n && arr[pos] < x) {
        pos++;
    }

    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = x;
    n++;

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
