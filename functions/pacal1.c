#include<stdio.h>
int factorial (int x){
    int fact=1;
    int i;
    for(i=2; i<=x; i++){
        fact *= i;
    }
    return fact;
}
int combination (int n, int r){
return factorial(n)/(factorial(r)*factorial(n-r));
}
     
int main(){
    int n, j;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            printf(" ");
        }
        {
            for(int k=0; i<=)
        }
            for (int i=0; i<=n; i++){
                for (int j=0; j<=i; j++){

                }
            }
        
        int icj = combination (i,j);
        printf("%d ", icj);
    }
    }    return 0;
 
    
