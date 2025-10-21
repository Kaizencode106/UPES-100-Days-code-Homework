/*
write a program to input time in seconds and coverts it to hours , minutes , seconds . FORMAT
*/
#include <stdio.h>
int main(){
    int s,h,m;
    printf("Enter time in seconds: ");
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    s=s%60;
    printf("Time: %d hours, %d minutes, %d seconds\n",h,m,s);
    return 0;
}