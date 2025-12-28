#include<stdio.h>
#include<string.h>
int main(){
    char str[100], last = -1, ch, i;
    puts("enter the charcter");
    gets(str);
    printf("enter the charcter to find:");
    scanf("%c", &ch);
    for(i=0; str[i] != 0; i++){   
         if(str[i] == ch)
    last =i;
    }
    puts("\nYou entered:");
    puts(str);
    if (last == -1)
        printf("Character '%c' not found in the string.\n", ch);
    else
        printf("Last occurrence of '%c' is at position %d.\n", ch, last + 1);

    return 0;
}
