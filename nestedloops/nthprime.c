//program to find nth prime number
#include<stdio.h>
int main(){
    int num,count=0,i=2;
    printf("enter the number:");
    scanf("%d", &num);
    for(i=2; ; i++){
        int flag=0;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
        if(count==num){
            printf("the %dth prime number is %d", num, i);
            break;
        }
    }
    return 0;
}