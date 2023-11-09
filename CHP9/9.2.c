/*
 * File: 9.2.c
 * File Created: 2023/10/09 15:15:20
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int nthDayOfYear(int year, int month, int day) {
    int days = 0;
    for (int i = 1; i < month; i++) {
        if (i == 2) {
            // Leap year check
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                days += 29;
            } else {
                days += 28;
            }
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            days += 30;
        } else {
            days += 31;
        }
    }
    days += day;
    return days;
}

int main() {
    struct date {
        int year;
        int month;
        int day;
    } newDay = {2023, 10, 3};
    int dayNum = nthDayOfYear(newDay.year, newDay.month, newDay.day);
    printf("%d/%d/%d is the %d-th day of the year", newDay.year, newDay.month, newDay.day, dayNum);
    return 0;
}