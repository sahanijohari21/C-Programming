#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // 1️⃣ print spaces
        for (int s = 1; s <= n - i; s++) {
            printf("  "); // two spaces to align nicely
        }

        // 2️⃣ print alphabets
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}
