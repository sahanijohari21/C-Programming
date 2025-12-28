//program to count the number of words in a sentence.
#include<stdio.h>
#include<string.h>  
int main (){
    char str[200];
    int i, count =1;
    puts("enter a string:");
    gets(str);
    for(i=0; str[i] != '\0'; i++){
        if(str[i]== ' ' && str[i+1] != '\0')
        count++;
    }
    printf("Number of words: %d", count);

    return 0;
}