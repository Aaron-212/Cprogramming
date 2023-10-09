/*
 * File: 8.6.c
 * File Created: 2023/09/23 19:22:13
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int stringlen (char *str) {
    size_t len = 0;
    while (*str != '\0') {
        str++;
        len++;
    }
    return len;
}

int main() {
    char str[100];
    int len;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    len = stringlen(str);
    printf("The len is %d\n", len);
}