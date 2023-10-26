/*
 * File: 7.18.c
 * File Created: 2023/09/20 23:44:44
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

// Calc the n-th day of the year, given year, month and day
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

// Validate the given year, month, day
int validateDate(int year, int month, int day) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return 0;
    }
    if (month == 2) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            if (day > 29) {
                return 0;
            }
        } else {
            if (day > 28) {
                return 0;
            }
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) {
            return 0;
        }
    } else {
        if (day > 31) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int year, month, day;
    printf("Please input YYYY/MM/DD: ");
    scanf("%d/%d/%d", &year, &month, &day);
    if ( validateDate(year, month, day) == 0 ) {
        printf("Invalid date!\n");
    } else {
        printf("The n-th day of the year is: %d\n", nthDayOfYear(year, month, day));
    }
    return 0;
}