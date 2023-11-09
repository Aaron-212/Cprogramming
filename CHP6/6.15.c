/*
 * File: 6.15.c
 * File Created: 2023/09/19 19:21:16
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

// Shallow copy

#include <stdio.h>

int main() {
    char s1[50];
    char s2[50];

    printf("Enter a string: ");
    fgets(s1, 50, stdin);

    for (int i = 0; i < 50; i++) {
        s2[i] = s1[i];
    }

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);

    return 0;
}