//program to create a structure named Date having day, month, and year as its elements.Store the current date in the structure.
// Now add 45 days to the current date and display the final date
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0;
    }
}
void addDays(struct Date *date, int daysToAdd) {
    date->day += daysToAdd;
    while (date->day > getDaysInMonth(date->month, date->year)) {
        date->day -= getDaysInMonth(date->month, date->year);
        date->month++;
        if (date->month > 12) {
            date->month = 1;
            date->year++;
            printf("Year changed to %d\n", date->year); 

        }
        
    }
}