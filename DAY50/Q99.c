/*Q99 (Strings)
Change the date format from dd/04/yyyy to dd-Apr-yyyy.*/

#include <stdio.h>
#include <string.h>
int main() {
    char date[20], day[3], month[3], year[5];
    char monthName[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int m;

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    m = atoi(month);

    if(m >= 1 && m <= 12)
        printf("%s-%s-%s", day, monthName[m - 1], year);
    else
        printf("Invalid month");

    return 0;
}
