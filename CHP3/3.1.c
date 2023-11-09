/*
 * File: 3.1.c
 * File Created: 2023/09/18 15:50:31
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <math.h>
#include <stdio.h>

int main() {
    double growthRate = 0.07;
    double result = pow(1 + growthRate, 10);
    printf("The final percentage is %.2f%%", result);

    return 0;
}