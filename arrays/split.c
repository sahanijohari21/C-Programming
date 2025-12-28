// program to take an array of 10 elements. Split it into the middle and store the  elements in two different arrays. E.g.- Initial array:
 #include<stdio.h>
 int main(){
    int arr[10]={12,5,8,20,3,15,7,30,1,18};
    int first_half[5];  
    int second_half[5];
    int i;
    //splitting the array into two halves
    for(i=0;i<5;i++){
        first_half[i]=arr[i];
    }
    for(i=5;i<10;i++){
        second_half[i-5]=arr[i];
    }
    printf("First half of the array: ");
    for(i=0;i<5;i++){
        printf("%d ",first_half[i]);
    }
    printf("\nSecond half of the array: ");
    for(i=0;i<5;i++){
        printf("%d ",second_half[i]);
    }
    return 0;
} Initial array: [12, 5, 8, 20, 3, 15, 7, 30, 1, 18]
First half: [12, 5, 8, 20, 3]
Second half: [15, 7, 30, 1, 18]     