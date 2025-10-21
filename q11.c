/*
write a program to input an integer and check whether it is even or odd using if else . 
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    // % = means remainder operator , this emans when divided by 2 if remainder is 0 then it is even else odd
    if(n%2==0){
        printf("%d is even\n",n);
        }
    
    else{
        printf("%d is odd\n",n);
    }
    return 0;
}