/*
 * File: 4.12.c
 * File Created: 2023/09/18 19:11:49
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    double x, y;
    printf("Enter x and y coords: ");
    scanf("%lf %lf", &x, &y);

    bool tower1 = pow((x - 2), 2) + pow((y - 2), 2) <= 1;
    bool tower2 = pow((x - 2), 2) + pow((y + 2), 2) <= 1;
    bool tower3 = pow((x + 2), 2) + pow((y - 2), 2) <= 1;
    bool tower4 = pow((x + 2), 2) + pow((y + 2), 2) <= 1;

    if (tower1 || tower2 || tower3 || tower4) {
        printf("10m\n");
    } else {
        printf("0m\n");
    }

    return 0;
}