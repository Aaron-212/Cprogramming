/*
 * File: 3.8.c
 * File Created: 2023/09/18 17:12:20
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
    char c1, c2;
    c1 = getchar();
    c2 = getchar();

    putchar(c1);
    putchar(c2);

    printf("%c, %c", c1, c2);
}