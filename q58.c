#include <stdio.h>
int main() {
    int q, i, max, min;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &q);
    int arr[q];
    printf("Enter %d elements:\n", q);
    for (i = 0; i < q; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < q; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);
    return 0;
}