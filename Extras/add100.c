/*
 * File: add100.c
 * File Created: 2023/10/12 11:21:38
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
    int result = 0;
    for (int i = 1; i <= 100; i++) {
        result += i;
    }
    printf("%d", result);
    return 0;
}