/*
 * File: 5.11.c
 * File Created: 2023/09/18 21:10:37
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
    double h = 100;
    double route = 0;
    route += h;
    for (int i = 0; i < 10; i++) {
        route += h;
        h = h / 2;
    }
    printf("route = %.2f\n", route);
    printf("h = %.2f\n", h);
    return 0;
}