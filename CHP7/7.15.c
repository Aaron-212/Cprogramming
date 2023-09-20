/*
 * File: 7.15.c
 * File Created: 2023/09/20 20:54:31
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

/*
 * Write individual functions as the requirments:
 * 1. Input 10 employees' names and IDs
 * 2. Sort the employees according to ID
 * 3. Given a specific ID, use binary search to find the employee, and the ID will be inputed from main(), not ftom stdin
 * Coding lang is C
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

struct Employee {
    char name[MAX_NAME_LENGTH];
    int id;
};

void inputEmployees(struct Employee employees[], int numEmployees) {
    printf("Enter the names and IDs of %d employees:\n", numEmployees);
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        fgets(employees[i].name, MAX_NAME_LENGTH, stdin);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        // Consume the remaining newline character after reading the ID
        getchar();
    }
}

int compareEmployeeIds(const void *a, const void *b) {
    const struct Employee *employeeA = (const struct Employee *)a;
    const struct Employee *employeeB = (const struct Employee *)b;
    return employeeA->id - employeeB->id;
}

void sortEmployees(struct Employee employees[], int numEmployees) {
    qsort(employees, numEmployees, sizeof(struct Employee), compareEmployeeIds);
}

struct Employee *binarySearchEmployee(struct Employee employees[], int numEmployees, int targetId) {
    int left = 0;
    int right = numEmployees - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (employees[mid].id == targetId) {
            return &employees[mid];
        } else if (employees[mid].id < targetId) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return NULL;
}

int main() {
    const int numEmployees = 10;
    struct Employee employees[numEmployees];

    inputEmployees(employees, numEmployees);
    sortEmployees(employees, numEmployees);

    int targetId;
    printf("Enter the ID of the employee to search for: ");
    scanf("%d", &targetId);

    struct Employee *foundEmployee = binarySearchEmployee(employees, numEmployees, targetId);
    if (foundEmployee != NULL) {
        printf("Employee found:\n");
        printf("Name: %s", foundEmployee->name);
        printf("ID: %d\n", foundEmployee->id);
    } else {
        printf("Employee not found.\n");
    }

    return 0;
}