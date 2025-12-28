#include<stdio.h>
int main(){
    // printf("enter the number of rows and columns:");
    // scanf("%d", &r, &c);
    for(int i=0; i<=3; i++){
        for(int j=0; j<=5; j++){
            if(i==0 || i==3 || j==0 || j==5){
            printf("*");
            }
            else{
                printf(" ");
        }
    }
    printf("\n");
}
    return 0;
}