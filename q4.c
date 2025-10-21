/*
write a program to calculate the area and cicumference of a circle given its radius 
*/
#include <stdio.h>
int main() {
    float r;
    float area, circumference;
    const float pi = 3.14159; 
    printf("Enter r of the circle: ");
    scanf("%f", &r);
    area = pi * r * r; // area = π * r *r 
    circumference = 2 * pi * r ; // circumference = 2 * π * r
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    return 0;
}