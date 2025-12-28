#include<stdio.h>
void england(){
    printf("You are in england \n");
    return;
}
void australia(){
    printf("You are in australia \n");
    england();
    return;
} 
void india(){
    printf("You are in india \n");
    void australia();
    australia();
    return;
} 
int main(){
    india();
    void australia ();
    return 0;
}