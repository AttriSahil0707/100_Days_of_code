/*
Q116 (Logic Enhancers)
Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
*/

#include <stdio.h>
int main() {
    int n, i, j, target;
    int nums[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &nums[i]);
    scanf("%d", &target);
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }
    printf("-1 -1");
    return 0;
}
