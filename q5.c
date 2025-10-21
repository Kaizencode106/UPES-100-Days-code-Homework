// convert fahrenhiet to celsius . 
// F = ( c* 9.0/5.0) + 32
# include <stdio.h> 
int main() {
    float c, f; 
    printf("Enter temperature in celsius: ");
    scanf("%f", &c);
    f = (c * 9.0 / 5.0) + 32; 
    printf("Temperature in fahrenhiet: %.2f\n", f);
    return 0; 
}