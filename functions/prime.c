#include <stdio.h>

// Function to check prime
int isPrime(int num) {
    int i;

    if (num <= 1)
        return 0;   // Not prime

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;   // Not prime
    }
    return 1;   // Prime
}

int main() {
    int n, count = 0, number = 2;

    printf("Enter how many prime numbers you want: ");
    scanf("%d", &n);

    printf("First %d prime numbers are:\n", n);

    while (count < n) {
        if (isPrime(number)) {
            printf("%d ", number);
            count++;
        }
        number++;
    }

    return 0;
}
