/*
 * File: 5.9.c
 * File Created: 2023/09/18 20:07:12
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
    int i, j, temp;
    for (i = 4; i < 1000; i++) {
        temp = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                temp += j;
            }
        }
        if (temp == i) {
            printf("%d its factors are ", i);
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    printf("%d, ", j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}