//Write a program to find the sum of the digits of a four-digit number (ex. 1234 sum=10) (without using a loop).
#include<stdio.h>
int main(){
    int num, sum=0, rem,number;
    printf("enter the number:");
    scanf("%d", &number);
    num=number;
    rem= num%10;
    sum += rem;
    num= num/10;
    rem= num%10;
    sum += rem;
    num= num/10;
    rem= num%10;
    sum += rem;
    num= num/10;
    rem= num%10;
    sum += rem;
    printf("The sum of digits of the number is %d", sum);
    return 0;
}
