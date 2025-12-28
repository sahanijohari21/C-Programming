//program to take 3 student marks in 5 subjects. Print the total marks of each student and the average marks of each subject
#include<stdio.h>
int main(){
    int marks[3][5];
    int total_marks[3]={0,0,0};
    float avg_marks[5]={0.0,0.0,0.0,0.0,0.0};
    int i,j;    
    printf("Enter the marks of 3 students in 5 subjects:\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            scanf("%d",&marks[i][j]);
            total_marks[i]+=marks[i][j];
            avg_marks[j]+=marks[i][j];      
            avg_marks[j]/=3;
        }
    }
    printf("\nTotal marks of each student:\n");
    for(i=0;i<3;i++){
        printf("Student %d: %d\n",i+1,total_marks[i]);
    }
    printf("\nAverage marks of each subject:\n");
    for(j=0;j<5;j++){   
        printf("Subject %d: %.2f\n",j+1,avg_marks[j]);
    }
    return 0;
}