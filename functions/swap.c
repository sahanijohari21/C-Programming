#include<stdio.h>
int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    int b;
    printf("Enter b: ");
    scanf("%d", &b);
    a= a+b;
    b= a-b;
    a= a-b;
    printf("\n the value of a and b is %d and %d \n", a, b);
    return 0;

}