/*
 * File: 4.6.c
 * File Created: 2023/09/18 17:23:45
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include<stdio.h>

int main() {
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);

    if (x<1) {
        y = x;
    } else if (1 <= x && x < 10) {
        y = 2*x-1;
    } else {
        y = 3*x -11;
    }

    printf("y is %d", y);
    return 0;
}