#include<stdio.h>
int main() {
    int n;
    printf("Enter number of rows/columns: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
//transpose of matrix
  for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++){
        int temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i]= temp;

    }
}
for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
}
return 0;
}
