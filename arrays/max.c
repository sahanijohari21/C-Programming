#include<stdio.h>
int main (){
    int i;
    int arr[7]={1,4,2,8,19,5,12};
    int max = -1; 
    for (i=0; i<=6; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("%d", max);

}
