#include <stdio.h>

int main() {
    int arr[4][2]; // 4 rows, 2 columns

    printf("Enter 8 elements:\n");

    for (int i = 0; i < 4; i++) {        // loop for 4 rows
        for (int j = 0; j < 2; j++) {    // loop for 2 columns
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe entered elements are:\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
