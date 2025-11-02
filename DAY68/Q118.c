/*Q118 (Logic Enhancers)
Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i=0;i<n;i++) scanf("%d",&nums[i]);
    int total = n*(n+1)/2;
    int sum = 0;
    for(int i=0;i<n;i++) sum += nums[i];
    printf("%d", total - sum);
    return 0;
}
