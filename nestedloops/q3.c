#include<stdio.h>
int main(){
    int rows=5, odd=1, even=2;
    for(int i=1; i<=5; i++){
        if(i%2==0){
        for(int j=1; j<=i; j++){
                printf("%d ", even);
                even +=2;
            }
        }
        else {
                for(int j=1; j<=i; j++){
                printf("%d ", odd);
                odd +=2;
            }
        }
        printf("\n");
    }
    return 0;
}