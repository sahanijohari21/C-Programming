//program to reverse an array with an auxiliary array.  
#include<stdio.h>
int main(){
    int arr[10]={12,5,8,20,3,15,7,30,1,18};
    int aux[10];
    int i;
    //copying elements to auxiliary array in reverse order
    for(i=0;i<10;i++){
        aux[i]=arr[9-i];
    }
    //copying back the elements from auxiliary array to original array
    for(i=0;i<10;i++){
        arr[i]=aux[i];
    }
    printf("Reversed array is: ");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
