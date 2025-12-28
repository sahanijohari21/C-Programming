//Write a program to find the total no. of days for a given number of months counting from January month
#include<stdio.h>
int main(){
    int total_days=0, month, i,year;
    printf("Enter year:");
    printf("enter the month number (1-12):");
    scanf("%d", &month);
    for(i=1; i<=month; i++){
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
            total_days += 31;
        }
        else if(i==4 || i==6 || i==9 || i==11){
            total_days += 30;
        }
        else if(i==2){
            if(year % 400 ==0 || (year % 4 ==0 && year % 100 !=0)){
                total_days += 29;
            }
            else{
                total_days += 28;
            }
        }
    }
    printf("Total number of days from January to month %d is %d days", month, total_days);
    return 0;
}