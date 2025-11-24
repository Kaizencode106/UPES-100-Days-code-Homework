// count 0 , -ve , +ve numbers in the array
#include <stdio.h>
int main() {
    int y, i, positive_count = 0, negative_count = 0, zero  = 0;

    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &y);
    int arr[y];
    printf("Enter %d elements:\n", y);
    for (i = 0; i < y; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero++;
        }
    }
    printf("The number of positive elements in the array is: %d\n", positive_count
    );
    printf("The number of negative elements in the array is: %d\n", negative_count
    );
    printf("The number of zero elements in the array is: %d\n", zero
    );
    return 0;
}