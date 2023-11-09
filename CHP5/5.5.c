/*
 * File: 5.5.c
 * File Created: 2023/09/18 19:45:49
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <math.h>
#include <stdio.h>

int main() {
    int a = 2;
    int n;
    int result = 0;

    printf("Enter a count: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        result += a * (pow(10, i + 1) - 1) / 9;
    }
    printf("Result: %d\n", result);
    return 0;
}