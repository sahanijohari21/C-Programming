#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];
    int position, length, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the starting position: ");
    scanf("%d", &position);

    printf("Enter the length of substring: ");
    scanf("%d", &length);

    for (i = 0; i < length; i++) {
        sub[i] = str[position + i - 1];  // -1 because string index starts at 0
    }
    sub[i] = '\0'; // null terminate substring

    printf("The substring is: ");
    puts(sub);

    return 0;
}
