/*
 * File: 6.5.c
 * File Created: 2023/09/19 14:00:32
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

// Reverse a sorted array

#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for (i = 9; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
    return 0;
}