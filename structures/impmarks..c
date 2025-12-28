//Write a program to create an array of student structures to store the roll no., name, and marks in 3 subjects. 
//Input the details of N students into the array and display roll no., name, and total marks of each student in decreasing order of total marks.
#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[50];
    int marks[3];
    int total;
};

int main() {
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student students[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].rollno);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        students[i].total = 0;

        for (j = 0; j < 3; j++) {
            printf("Marks in subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
    }

    // Sorting in decreasing order of total marks
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (students[j].total < students[j + 1].total) {
                struct student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Display result
    printf("\nStudent Details in Decreasing Order of Total Marks:\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Total Marks: %d\n",
               students[i].rollno,
               students[i].name,
               students[i].total);
    }

    return 0;
}
