#include <stdio.h>

int main() {
    int a, b, c;
    int *p1, *p2, *p3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Assign addresses to pointers
    p1 = &a;
    p2 = &b;
    p3 = &c;

    // Compare using pointer values
    int greatest, smallest;

    // For greatest
    if (*p1 > *p2 && *p1 > *p3)
        greatest = *p1;
    else if (*p2 > *p1 && *p2 > *p3)
        greatest = *p2;
    else
        greatest = *p3;

    // For smallest
    if (*p1 < *p2 && *p1 < *p3)
        smallest = *p1;
    else if (*p2 < *p1 && *p2 < *p3)
        smallest = *p2;
    else
        smallest = *p3;

    printf("Greatest number = %d\n", greatest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
