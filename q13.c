/*
write a program find if input year is leap year or not . Using conditional statement 
*/
#include <stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    // a year is leap year if it is divisible by 4 but not by 100
    // but if it is divisible by 400 then it is leap year 
    if((year%4==0 && year%100!=0) || (year%400==0)){
        printf("%d is a leap year\n",year);
    }
    else{
        printf("%d is not a leap year\n",year);
    }
    return 0;
}