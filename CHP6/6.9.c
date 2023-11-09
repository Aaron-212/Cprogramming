/*
 * File: 6.9.c
 * File Created: 2023/09/19 15:08:50
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

// Find the input num in the given sorted array.

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int num = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = len - 1;
    int mid = 0;
    int found = 0;
    printf("Please input the number you want to find: ");
    scanf("%d", &num);
    while (i <= j) {
        mid = (i + j) / 2;
        if (arr[mid] == num) {
            found = 1;
            break;
        } else if (arr[mid] > num) {
            j = mid - 1;
        } else {
            i = mid + 1;
        }
    }
    if (found == 1) {
        printf("The number %d is found in the array at %d.\n", num, mid + 1);
    } else {
        printf("The number %d is not found in the array.\n", num);
    }
    return 0;
}