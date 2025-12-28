// program to change all lower-case letters into upper case in a sentence.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    printf("Enter a string in lowercase: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("String in uppercase: %s", str);
    return 0;
}