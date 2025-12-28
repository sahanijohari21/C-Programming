#include<stdio.h>
#include<string.h>
int main(){
    char str1[]= "sahani";
    char str2[]= "Johari";
    char str3[100];
    printf("%d \n", strcmp(str1, str2));
    printf("%s \n", strcpy(str3, str2));
    printf("%d", strlen(str1));
    printf("%s", strcat(str1, str2));
    return 0;
}