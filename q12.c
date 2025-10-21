/*
write a program to check whether a number is positive, negative or zero using nested if else.
*/

#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if ( a >= 0){
        if ( a== 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is positive.\n");
        }
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}