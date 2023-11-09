/*
 * File: 7.11.c
 * File Created: 2023/09/20 19:51:16
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

void bubbleSort(char arr[], int size) {
    int i, j;
    char temp;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    char a[10];
    int i;

    printf("Enter 10 chars: ");
    for (i = 0; i < 10; i++) {
        scanf(" %c", &a[i]);
    }

    printf("Before sort: ");
    for (i = 0; i < 10; i++) {
        printf("%c ", a[i]);
    }
    printf("\n");

    bubbleSort(a, 10);

    printf("After sort: ");
    for (i = 0; i < 10; i++) {
        printf("%c ", a[i]);
    }
    printf("\n");

    return 0;
}