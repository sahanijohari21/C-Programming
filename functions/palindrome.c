#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    gets(str);   // or use fgets()

    strcpy(rev, str);      // copy original string
    strrev(rev);           // reverse the copied string

    if (strcmp(str, rev) == 0)
        printf("The string is a Palindrome");
    else
        printf("The string is NOT a Palindrome");

    return 0;
}
