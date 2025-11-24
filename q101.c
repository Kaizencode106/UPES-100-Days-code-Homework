/*
write a program to take a sorted array ( say nums []) and an integer ( say target )as inputs .
The elements in the sorted array might be reapeated . 
you need to print the first and last occurrence of the target and print the index of first and last occurrrence . 
Print -1 -1 if the target is not present . 
*/
#include <stdio.h>
int main() {
    int v, target;
    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &v);
    int nums[v];
    printf("Enter %d sorted elements:\n", v);
    for (int i = 0; i < v; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target integer: ");
    scanf("%d", &target);
    int first = -1, last = -1;
    for (int i = 0; i < v; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    if (first != -1 && last != -1) {
        printf("First and last occurrence of %d: %d %d\n", target, first, last);
    } else {
        printf("-1 -1\n");
    }
    return 0;
}