//Write a program to interchange the values of two variables using a third variable.
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the value of a and b:");
    scanf("%d %d", &a, &b);
    temp=a;
    a=b;
    b=temp;
    printf("interchanged value of a and b is %d and %d", a,b);
    return 0;
}