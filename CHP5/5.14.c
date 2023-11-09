/*
 * File: 5.14.c
 * File Created: 2023/09/18 21:23:22
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <math.h>
#include <stdio.h>

double fx(double x) { return 2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6; }

double dfx(double x) { return 6 * pow(x, 2) - 8 * x + 3; }

// 牛顿迭代法
int main() {
    double x = 1.5;
    for (int i = 0; i < 100; i++) {
        x = x - fx(x) / dfx(x);
    }
    printf("x = %f\n", x);
    return 0;
}