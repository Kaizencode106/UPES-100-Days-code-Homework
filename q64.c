// Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int number, digit_count[10] = {0}, max_count = 0, most_frequent_digit = -1;

    // Input the number
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Count occurrences of each digit
    while (number != 0) {
        int digit = number % 10;
        digit_count[digit]++;
        number /= 10;
    }

    // Find the digit with the maximum occurrences
    for (int i = 0; i < 10; i++) {
        if (digit_count[i] > max_count) {
            max_count = digit_count[i];
            most_frequent_digit = i;
        }
    }
    
    // Output the result
    if (most_frequent_digit != -1) {
        printf("The digit that occurs the most is %d with %d occurrences.\n", most_frequent_digit, max_count);
    } else {
        printf("No digits found.\n");
    }

    return 0;
}