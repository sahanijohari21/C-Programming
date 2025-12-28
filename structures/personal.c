//Write a program to define a structure personal that would contain the person’s name, date of joining, and salary. 
//Using this structure write a program to read this information for one person from the keyboard and print the same on the screen.
#include<stdio.h>
#include <string.h>
int main(){
    struct personal{
        char name[50];
        char dateofjoining[50];
        float salary;
    }p1;
    printf("Enter name: ");
    gets(p1.name);
    printf("Enter date of joining: ");
    gets(p1.dateofjoining);
    printf("Enter salary: ");
    scanf("%f", &p1.salary);    
    printf("\nPersonal Details:\n");
    printf("Name: %s\n", p1.name);  
    printf("Date of Joining: %s\n", p1.dateofjoining);
    printf("Salary: %.2f\n", p1.salary);
    return 0;
}