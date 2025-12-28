#include<stdio.h>
int main() {
int i,j,n;
printf("enter the value of n:");
scanf("%d", &n);
for(i=1; i<=n; i++){
    int a=1;
    for (j=1; j<=n; j++)
    {
        printf("%c", a+64);
        a++;
    }
    printf("\n");
}
return 0;
}