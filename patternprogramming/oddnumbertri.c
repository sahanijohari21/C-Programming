#include<stdio.h>
int main() {
int i,j,n;
printf("enter the value of n:");
scanf("%d", &n);
for(i=1; i<=n; i++){
    int num=1;
    for (j=1; j<=i; j++){
        printf("%d", num);
        num +=2;
    }
    printf("\n");
}
return 0;
}