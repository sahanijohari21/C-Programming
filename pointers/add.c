#include<stdio.h>
void add(int* a, int* b){
    return *a+*b;
}

int main(){
    int a,b
    printf("enter the value of a and b:");
    scanf("%d %d",&a, &b );
    int sum= add(&a,&b);
    printf("the sum of a and b is %d",sum);
    return 0;
}
