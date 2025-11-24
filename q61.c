// search for elements in an array using linear search 
#include <stdio.h>
int main() {
    int t, i, find_element, found = 0;

    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &t);
    int arr[t];

    printf("Enter %d elements:\n", t);
    for (i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &find_element);
    for (i = 0; i < t; i++) {
        if (arr[i] == find_element) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Element %d is found in the array.\n", find_element);
    } else {
        printf("Element %d is not found in the array.\n", find_element);
    }
    return 0;
}