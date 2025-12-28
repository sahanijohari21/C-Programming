//maguc square=sum of the numbers in each row, each column, and both main diagonals is the same
#include<stdio.h>
int main(){
    int n;
    printf("enter the rows and columns:");
    scanf("%d", &n);
    int sumdiagonal1=0;
    int sumdiagonal2=0;
    int magicsum;
    int a[n][n];
    printf("enter the elements:");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i=0; i<n; i++){
        sumdiagonal1 += a[i][i];
        sumdiagonal2 += a[i][n-1-i];
    }
    if (sumdiagonal1 != sumdiagonal2){
        printf("matrix is not a magic square");
        return 0;
    }
magicsum=sumdiagonal1;
    int rowsum [10]= {0};
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            rowsum[i] += a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        if(rowsum[i] != magicsum){
            printf("matrix is not a magic square");
            return 0;
        }
    }
    int columnsum [10]= {0};
    for (int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            columnsum [j] += a[i][j];

        }
    }
    for(int j=0; j<n; j++){
        if(columnsum [j] != magicsum){
            printf("matrix is not a magic square");
            return 0;
        }
    }
    printf("matrix is a magic square:");
    return 0;
}
