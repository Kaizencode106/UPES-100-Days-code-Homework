/*
write a program to swap to variable without using 3rd variable
*/
#include <stdio.h>
int main() {
    float a, b;
    printf("Enter first number (a): ");
    scanf("%f", &a);
    printf("Enter second number (b): ");
    scanf("%f", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping:\n");
    printf("First number (a): %.2f\n", a);
 
    printf("Second number (b): %.2f\n", b);
    return 0;
}