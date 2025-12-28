#include <stdio.h>

// Recursive function to find nth Fibonacci term
int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int N, i;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    printf("First %d Fibonacci terms are:\n", N);
    for (i = 0; i < N; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}
