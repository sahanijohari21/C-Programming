//Write a program that takes three sides of a triangle input and calculates its area, 
//if these conditions are satisfied a+b>c, b+c>a, a+c>b, calculate area=(a+b+c)/2
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,area;
    printf("enter the three sides of triangle:");
    scanf("%f %f %f", &a, &b, &c);
    if(a+b>c && b+c>a && a+c>b){
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of the triangle is %.2f", area);
    }
    else{
        printf("The given sides do not form a triangle");
    }
    return 0;
}   