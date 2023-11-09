/*
 * File: 6.4.c
 * File Created: 2023/09/19 12:32:20
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

// Given a sorted int array, insert the input num into the correct place,
// making the array still sorted

#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[6];
    int num = 0;
    int flag = 0;

    printf("Input the num to insert: ");
    scanf("%d", &num);

    int i;
    for (i = 0; i < 5; i++) {
        if (arr1[i] >= num) {
            flag = 1;
            break;
        }
        arr2[i] = arr1[i];
    }

    if (flag == 1) {
        arr2[i] = num;
        i++;
    }

    for (; i < 6; i++) {
        arr2[i] = arr1[i - 1];
    }

    for (i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}