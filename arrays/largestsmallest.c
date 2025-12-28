#include<stdio.h>
int main(){
    int arr[10]={12,5,8,20,3,15,7,30,1,18};
    int i;
    int largest=arr[0];
    int smallest=arr[0];
    for(i=1;i<10;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    return 0;
}