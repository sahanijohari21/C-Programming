#include<stdio.h>
int increment(int a){
    a = a+1;
    return a;
}
int main(){
    int x=10;
    int increased = increment(x);
    printf("increased value is: %d \n", increased);
    printf("x=%d",x);
    return 0;
}

