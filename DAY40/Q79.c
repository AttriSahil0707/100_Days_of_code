/*Q79 (2D Arrays)
Perform diagonal traversal of a matrix.*/
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Diagonal traversal:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i][i]);
    printf("\n");
    return 0;
}
