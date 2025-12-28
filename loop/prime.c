//program to find whether the given number is prime or not.
#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    if(num%2 == 0){
        printf("the given number is prime");
    }
    else
    printf("the given number is not prime");
    return 0;
}