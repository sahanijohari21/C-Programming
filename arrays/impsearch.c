#include<stdio.h>
#include<stdbool.h>
int main() {
    int arr [9]={4,5,21,20,21,30,15,7,10};
    int x=21;
    int i,idx;
    bool flag = false;
    for(i=0; i<9; i++){
        if (arr[i]==x) {
            flag = true;
            idx=i;
            break;
        }
    }
    if (flag==false) {
        printf("%d is not present in the array", x);
    }
    else{
        printf("%d is present in the array and index is %d", x,idx);
}
return 0;
}