#include <stdio.h>
#include<math.h>
int main(){
    int ognum, num, rem, result=0, n=0;
    printf("enter the number:\n");
    scanf("%d", &num);
    ognum = num;
    while(ognum !=0){
        ognum /= 10;
        n++;
    }
    ognum = num; 
    while(ognum != 0){
        rem= ognum % 10;
        result += pow(rem,n);
        ognum /= 10;
    }
    if (result==num){
        printf("%d is an armstrong number", num);
    }
    else
    printf("%d is not an armstrong number", num);
    return 0;
}