#include <stdio.h>

int main() {
    int n = 4; 
    for (int i = 1; i <= n; i++) {
        int start;

        // Odd row → start with 1
        // Even row → start with 0
        if (i % 2 == 1)
            start = 1;
        else
            start = 0;
            
        int bit = start;

        for (int j = 1; j <= i; j++) {
            printf("%d", bit);
            bit = 1 - bit; // alternate between 0 and 1
        }

        printf("\n");
    }
    return 0;
}
