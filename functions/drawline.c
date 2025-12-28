#include<stdio.h>
void drawline();
main (){
    drawline();
}
void drawline(void)
{
    int i;
    for(i=0; i<80; i++){
        printf("-");
    }
}