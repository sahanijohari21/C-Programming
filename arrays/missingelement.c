#include<stdio.h>
int main(){
    int sum=0, sum2= 4950, arr[99];
    int i, miss;
    for(i=0; i<99; i++) {
        sum += arr[i];
    }
    miss = sum2 - sum;
    printf("missing element is %d", miss);
    return 0;
}