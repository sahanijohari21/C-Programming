#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    gets(str);   // ⚠️ unsafe but fine for learning (use fgets in real use)

    ptr = str;   // pointer points to first character of string

    while (*ptr != '\0') {   // loop until end of string
        length++;
        ptr++;               // move pointer to next character
    }

    printf("The length of the string is: %d", length);

    return 0;
}
