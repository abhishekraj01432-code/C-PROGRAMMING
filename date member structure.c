#include <stdio.h>
#include <stdlib.h>
struct Date {
    int day, month, year;
};
int main() {
    struct Date date1, date2;
    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
    int days1 = countDays(date1);
    int days2 = countDays(date2);

    int difference = abs(days2 - days1);
    printf("The difference between the two dates is %d days.\n", difference);

    return 0;
}
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}
int countDays(struct Date date) {
    int totalDays = date.year * 365 + date.day;
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < date.month - 1; i++) {
        totalDays += monthDays[i];
    }
    totalDays += (date.year / 4) - (date.year / 100) + (date.year / 400);
    if (isLeapYear(date.year) && date.month > 2) {
        totalDays += 1;
    }

    return totalDays;
}
