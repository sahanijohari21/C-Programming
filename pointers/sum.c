#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;  // pointer points to the first element of array

    for (i = 0; i < n; i++) {
        sum += *(ptr + i);   // access array elements using pointer arithmetic
    }

    printf("The sum of array elements is: %d", sum);

    return 0;
}
