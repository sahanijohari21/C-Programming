// Program to store employee details and display employees
// whose net salary is more than the average net salary

#include <stdio.h>
#include <string.h>

struct employee {
    int emp_no;
    char name[50];
    float basic_salary;
    float hra;
    float net_salary;
};

int main() {
    int n, i;
    float total_net_salary = 0.0, average_net_salary;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct employee employees[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &employees[i].emp_no);

        getchar();  // clear newline left by scanf

        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);

        // Remove trailing newline from fgets
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';

        printf("Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);

        printf("HRA: ");
        scanf("%f", &employees[i].hra);

        // Calculate net salary
        employees[i].net_salary =
            employees[i].basic_salary + employees[i].hra;

        total_net_salary += employees[i].net_salary;
    }

    // Calculate average net salary
    average_net_salary = total_net_salary / n;

    printf("\nEmployees with Net Salary more than Average Net Salary:\n");

    for (i = 0; i < n; i++) {
        if (employees[i].net_salary > average_net_salary) {
            printf("Emp No: %d, Name: %s, Basic: %.2f, HRA: %.2f, Net Salary: %.2f\n",
                   employees[i].emp_no,
                   employees[i].name,
                   employees[i].basic_salary,
                   employees[i].hra,
                   employees[i].net_salary);
        }
    }

    return 0;
}
