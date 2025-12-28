-#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, flag = 0;

    printf("Enter a string: ");
    gets(str);  // for learning only; unsafe in real use

    length = 0;
    while (str[length] != '\0')   // find length manually
        length++;

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("The string is a palindrome.");
    else
        printf("The string is NOT a palindrome.");

    return 0;
}
