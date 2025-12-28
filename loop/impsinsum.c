#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    float x, sum = 0, term, fact;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        fact = 1;

        // factorial of (2*i + 1)
        for (j = 1; j <= 2*i + 1; j++) {
            fact = fact * j;
        }

        term = pow(-1, i) * pow(x, 2*i + 1) / fact;
        sum = sum + term;
    }

    printf("Sum of sin(x) series = %.4f\n", sum);

    return 0;
}
