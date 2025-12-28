#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[100], subStr[50];
    char *ptr;

    printf("Enter the main string: ");
    gets(mainStr);   // or use fgets

    printf("Enter the substring: ");
    gets(subStr);

    ptr = strstr(mainStr, subStr);

    if (ptr != NULL) {
        printf("Substring found.\n");
        printf("Pointer address of first occurrence: %p\n", ptr);
        printf("Substring from first occurrence: %s", ptr);
    } else {
        printf("Substring not found.");
    }

    return 0;
}
