// write a program to calculate simple and    compond interest for given principal , rate of interest and time. 
#include <stdio.h>
#include<math.h>
int main(){
    float p,r,t,si,ci;
    printf("Enter the principal, rate of interest and time: ");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;

    ci=p*(pow((1+r/100),t)-1);
    printf("Simple Interest: %.2f\n",si);
    printf("Compound Interest: %.2f\n",ci);

    return 0;

    printf("Enter the principal, rate of interest and time : ");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    ci=p*(pow((1+r/100),t)-1);
    printf("Simple Interest: %.2f\n",si);
    printf("Compound Interest: %.2f\n",ci);
    return 0;
}