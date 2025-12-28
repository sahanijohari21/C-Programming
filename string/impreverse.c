#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("enter the character:")
    gets(str)
    int size=0;
    int i=0;
     while (str[i] != '\0') {
        size++;
        i++;
    for (int k=0; j=size-1; k<j; k++, j--){
        char temp = str[k];
        str[k]=str[j];
        str[j]=temp;
    }
    puts("the reverse string is:");
    puts(str);
    return 0;
}
}