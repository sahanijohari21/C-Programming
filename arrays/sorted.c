// program to check whether an array is sorted or not in ascending order.
#include<stdio.h>
#include<stdbool.h> 
int main(){
    int arr[10]={1,3,5,7,9,11,13,15,17,19};
    int i;
    bool isSorted=true;
    for(i=0;i<9;i++){
        if(arr[i]>arr[i+1]){
            isSorted=false;
            break;
        }
    }
    if(isSorted){
        printf("The array is sorted in ascending order.");
    }
    else{
        printf("The array is not sorted.");
    }
    return 0;
}