#include <stdio.h>

int max(int a[], int size)
{
    int maxNo = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] > maxNo)
            maxNo = a[i];
    return maxNo;
}

int main()
{
    int arr[] = {12, 233, 1, 32, 43};
    printf("Greatest number in the array: %d\n", max(arr, sizeof(arr) / sizeof(int)));
    return 0;
}

/*

Output:
Greatest number in the array: 233

*/