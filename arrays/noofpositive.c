// program to find the number of positive numbers, negative numbers, odd numbers, even numbers, and the number of 0 of an array.
#include<stdio.h>
int main(){
    int arr[10]={12,-5,0,20,-3,15,0,-30,1,18};
    int i;
    int count_positive=0;
    int count_negative=0;
    int count_odd=0;
    int count_even=0;
    int count_zero=0;
    for(i=0;i<10;i++){
        if(arr[i]>0){
            count_positive++;
        }
        else if(arr[i]<0){
            count_negative++;
        }
        else{
            count_zero++;
        }
        if(arr[i]%2==0 && arr[i]!=0){
            count_even++;
        }
        else if(arr[i]%2!=0){
            count_odd++;
        }
    }
    printf("Number of positive numbers: %d\n", count_positive);
    printf("Number of negative numbers: %d\n", count_negative);
    printf("Number of odd numbers: %d\n", count_odd);
    printf("Number of even numbers: %d\n", count_even);
    printf("Number of zeros: %d\n", count_zero);
    return 0;
}