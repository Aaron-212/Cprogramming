/*
 * File: 5.10.c
 * File Created: 2023/09/18 20:45:10
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
    int i, temp;
    double a = 1;
    double b = 2;
    double result = 0.0;
    for (i = 1; i <= 20; i++) {
        result += b / a;
        temp = a;
        a = b;
        b = temp + a;
    }
    printf("result = %f\n", result);
    return 0;
}