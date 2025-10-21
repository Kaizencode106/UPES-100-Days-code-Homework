// c program to perform basic airthmetic operations on two numbers 
#include <stdio.h>
int main() {
    float num1, num2;
    float sum, difference, product, quotient; 
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    sum = num1 + num2; // addition
    difference = num1 - num2; // subtraction
    product = num1 * num2; // multiplication
    quotient = num1 / num2; // division
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);
    return 0; 
}