/*
 * File: 7.8.c
 * File Created: 2023/09/19 20:39:33
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

void int2array(int num, int *arr) {
    int i = 0;
    while (num > 0) {
        arr[i++] = num % 10;
        num /= 10;
    }
}

int main() {
    int inNum;
    int arr[4];
    printf("Please enter a 4 digit number: ");
    scanf("%d", &inNum);
    int2array(inNum, arr);
    printf("The array is: ");
    for (int i = 3; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}