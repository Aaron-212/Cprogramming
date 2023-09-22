/*
 * File: 8.2.c
 * File Created: 2023/09/21 17:30:34
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>
#include <string.h>

void sortStrings(char **strArray, int size) {
    int i, j;
    char *temp;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (strcmp(strArray[i], strArray[j]) > 0) {
                temp = strArray[i];
                strArray[i] = strArray[j];
                strArray[j] = temp;
            }
        }
    }
}

int main() {
    char *strArray[] = { "banana", "apple", "orange" };
    int size = sizeof(strArray) / sizeof(char *);

    printf("Before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", strArray[i]);
    }

    sortStrings(strArray, size);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", strArray[i]);
    }

    return 0;
}