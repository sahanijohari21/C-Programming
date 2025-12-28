#include <stdio.h>
#include <string.h>

// Function to compare two names
int compare(char a[], char b[]) {
    return strcmp(a, b);   // returns <0, 0, or >0
}

// Function to sort names using Bubble Sort
void Sort(char names[][50], int n) {
    int i, j;
    char temp[50];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (compare(names[j], names[j + 1]) > 0) {
                // swap names
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    int n, i;
    char names[20][50];

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter names:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    Sort(names, n);

    printf("\nSorted list of names:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
