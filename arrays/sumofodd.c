#include<stdio.h>
int main(){
    int arr[10]={12,5,8,20,3,15,7,30,1,18};
    int i;
    int sum_odd=0;
    for(i=0;i<10;i++){
        if(arr[i]%2!=0){
            sum_odd+=arr[i];
        }
    }
    printf("Sum of odd numbers in the array is %d", sum_odd);
    return 0;
}