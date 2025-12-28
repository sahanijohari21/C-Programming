#include <stdio.h>

int get_billing_tier(int calls) {
    if (calls <= 100) return 1;
    if (calls <= 150) return 2;
    if (calls <= 200) return 3;
    return 4;  // For calls > 200
}

int main() {
    int calls;
    float bill;
    printf("enter the number of calls made:");
    scanf("%d", &calls);
    
    switch (get_billing_tier(calls)) {
        case 1:
            bill = 200;
            break;
        case 2:
            bill = 200 + (calls - 100) * 0.60;
            break;
        case 3:
            bill = 200 + (50 * 0.60) + (calls - 150) * 0.50;
            break;
        case 4:
            bill = 200 + (50 * 0.60) + (50 * 0.50) + (calls - 200) * 0.40;
            break;
        default:
            printf("Invalid number of calls");
            return 1;
    }
    // Optionally print the bill here
    printf("Total bill: %.2f\n", bill);
    return 0;
}