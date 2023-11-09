/*
 * File: 4.4.c
 * File Created: 2023/09/18 17:16:06
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

// 同1.6

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("a is the largest.");
    } else if (b > a && b > c) {
        printf("b is the largest.");
    } else if (c > a && c > b) {
        printf("c is the largest.");
    } else {
        printf("Values are not unique");
    }

    return 0;
}