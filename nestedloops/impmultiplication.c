//program to generate the multiplication table for n numbers up to k terms (nested loops).
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter how many numbers you want tables for: ");
    scanf("%d", &n);

    printf("Enter how many terms you want in each table: ");
    scanf("%d", &k);

    int i, j;

    // Outer loop for each number
    for (i = 1; i <= n; i++) {
        printf("\nMultiplication Table of %d:\n", i);

        // Inner loop for terms
        for (j = 1; j <= k; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
