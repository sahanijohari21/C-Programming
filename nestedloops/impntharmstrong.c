#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0, num = 1, temp, sum, digits, rem;

    printf("Enter N: ");
    scanf("%d", &n);

    while (1) {
        temp = num;
        sum = 0;
        digits = 0;

        // Count digits
        int t = temp;
        while (t > 0) {
            digits++;
            t /= 10;
        }

        // Calculate Armstrong sum
        t = temp;
        while (t > 0) {
            rem = t % 10;
            sum += pow(rem, digits);
            t /= 10;
        }

        // Check Armstrong
        if (sum == num) {
            count++;
            if (count == n) {
                printf("The %dth Armstrong number is: %d\n", n, num);
                break;
            }
        }

        num++;
    }

    return 0;
}
