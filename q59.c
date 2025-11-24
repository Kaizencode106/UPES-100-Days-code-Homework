//count even odd numbers in the array 
#include <stdio.h>
int main() {
    int r, i, even_count = 0, odd_count = 0;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &r);
    int arr[r];
    printf("Enter %d elements:\n", r);
    for (i = 0; i < r; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("The number of even elements in the array is: %d\n", even_count
    );
    printf("The number of odd elements in the array is: %d\n", odd_count
    );
    return 0;
}