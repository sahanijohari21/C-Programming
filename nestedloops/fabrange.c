#include<stdio.h>
int main(){
    int num,n1,n2,n3,i;
    printf("enter the first number:");
    scanf("%d", &n1);
    printf("enter the second number:");
    scanf("%d", &n2);
    printf("enter the last number:");
    scanf("%d", &num);
    printf("\n%d %d", n1,n2 );
    for(i=n2; i< num; i++){
        n3=n1+n2;
        if(n3>=num){
            break;
        }
        printf(" %d", n3);
        n1=n2;
        n2=n3;  
}
return 0;
}