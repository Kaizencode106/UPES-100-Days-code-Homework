// write a program to swap 2 numbers using 3rd variable
#include <stdio.h>
int main() {
    float a, b, temp;
    printf("Enter first number (a): ");
    scanf("%f", &a);
    printf("Enter second number (b): ");
    scanf("%f", &b);
    temp = a; 
    a = b; 
    b = temp; 
    printf("After swapping:\n");
    printf("First number (a): %.4f\n", a);
    printf("Second number (b): %.4f\n", b);
    return 0;
}

