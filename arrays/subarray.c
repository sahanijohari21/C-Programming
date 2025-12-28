#include<stdio.h>
int main(){
    int arr[10]={12,5,8,20,3,15,7,30,1,18};
    int i;
    printf("enter the starting index of subarray: ");
    int start;  
    scanf("%d",&start);
    printf("enter the ending index of subarray: ");     
    int end;
    scanf("%d",&end);
    printf("The subarray is: ");
    for(i=start;i<=end;i++){
        printf("%d ",arr[i]);
    }   
    return 0;
}