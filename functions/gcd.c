#include <stdio.h>

// Function to find GCD
int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("GCD of %d and %d is %d", x, y, gcd(x, y));

    return 0;
}
