#include<stdio.h>
void inc(int* a, int* b){
    (*a)++;
    (*b)++;
}
int main(){
    int a=20, b=30;
    printf("before function call: a=%d and b=%d:", a,b);
    inc(&a,&b);
    printf("after call a=%d, b=%d", a,b);
}
