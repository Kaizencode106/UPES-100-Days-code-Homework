// find the sum of the array elements s
#include <stdio.h>
int main() {
    int z, i, sum = 0;

    printf("Enter the number of elements  you want in the array: ");
    scanf("%d", &z);
    int arr[z];
    printf("Enter %d elements:\n", z);
    for (i = 0; i < z; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}