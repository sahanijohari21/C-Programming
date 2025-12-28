#include<stdio.h>
int main (){
    int count=0 ,i, arr[7]={2,8,4,3,8,15,7};
    //number greater than 5
    for(i=0; i<7; i++)
    if (arr[i]> 5) {
        count += 1;
    }

    printf("count=%d", count);
    return 0;
}