#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int a[10][10],i;
    int trace=0;
    int norm =0;
    printf("enter the no of rows and columns: ");
    scanf("%d", &n);
    printf("\nenter the elements: ");
    for ( i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                trace += a[i][j];  
                norm += a[i][j] * a[i][j];  
        }
    }
    norm = sqrt(norm);  // take square root for final norm value

    printf("\nTrace of the matrix = %d", trace);
    printf("\nNorm of the matrix = %.2lf\n", norm);
    return 0;
}