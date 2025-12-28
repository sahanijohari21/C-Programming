//program for searching for an element in the matrix and counting the number of occurrences of that element and printing all the indices wherever present.
#include<stdio.h>
#include<stdbool.h>
int main() {
    int arr [4][4]={4,5,21,20,21,15,7,10,21,32,80,72,21,90,11,17};
    int x=21;
    int count = 0;
    bool found = false;
    printf("Occurrences of %d at positions:\n", x);
    for(int i=0; i<4; i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==x){
                printf("(%d, %d)\n", i, j);
                count++;
                found = true;
            }
        }
    }
    
    if (!found) {
        printf("%d is not present in the array\n", x);
    } else {
        printf("%d is present %d times in the array\n", x, count);
    }
    return 0;
}