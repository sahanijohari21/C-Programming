#include<stdio.h>
int main(){
    int n;
    int a[10][10], i;
    printf("enter the no of rows and columns: ");
    scanf("%d", &n);
    printf("\nenter the elements: ");
    for ( i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for( i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(a[i][j] != a[j][i]){
                printf("\nIt is not a symmetric matrix");
                return 0;
            }
        }
    }
    printf("\nit is a symmetric matrix");
    return 0;
}