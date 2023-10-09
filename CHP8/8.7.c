/*
 * File: 8.7.c
 * File Created: 2023/09/23 19:25:00
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    int n = 0;
    printf("Please enter a string: ");
    fgets(str1, 100, stdin);
    printf("Please input where to start: ");
    scanf("%d", &n);


    char *src = str1 + n;
    char *dest = str2;
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    printf("%s", str2);
    return 0;
}