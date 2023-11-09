/*
 * File: 5.12.c
 * File Created: 2023/09/18 21:12:54
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
    int count = 1;
    for (int i = 0; i < 10; i++) {
        count = (count + 1) * 2;
    }
    printf("%d\n", count);
    return 0;
}