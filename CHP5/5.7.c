/*
 * File: 5.7.c
 * File Created: 2023/09/18 19:57:31
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
    int i;
    double result = 0;

    for (i = 1; i <= 100; i++) {
        result += i;
    }
    for (i = 1; i <= 50; i++) {
        result += i * i;
    }
    for (i = 1; i <= 10; i++) {
        result += 1.0 / i;
    }

    printf("result = %.16f\n", result);
    return 0;
}