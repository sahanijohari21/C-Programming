// program to program to calculate an area of a circle, a rectangle, or a triangle depending on the user’s choice.
#include<stdio.h>
int main(){
    int shape, circle, rectangle, triangle;
    float area;
    printf("enter the shape:");
    printf("1.Circle 2.Rectangle 3.Triangle \n");
    scanf("%d", &shape);
    switch(shape){
    case 1: {
        float r;
        printf("enter the radius of the circle:\n");
        scanf("%f", &r);
        area= 3.14*r*r;
        printf("area of circle is: %f", area);
            break;
    }
    case 2:{
        float l,b;
        printf("enter the length and breadth:\n");
        scanf("%f %f",&l,&b);
        area= l*b;
        printf("area of rectangle is: %f", area);
            break;
    }

    case 3:{
        float a,b,c;
        printf("enter the sides of triangle:\n");
        scanf("%f %f %f", &a, &b, &c);
        if((a+b>c) && (a+c>b) && (b+c>a))
        {
            area= a+b+c/2;
            printf("area of triangle is %f", area);
        }
        else{
            printf("sides are invalid");
        }
        break;
    }
}
    return 0;
}