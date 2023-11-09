/*
 * File: 7.5.c
 * File Created: 2023/09/19 19:50:44
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

// Reverse a char array / string

#include <stdio.h>
#include <string.h>

void reverseStr(char *str) {
    int len = strlen(str);
    int i = 0;
    int j = len - 1;
    while (i < j) {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
}

int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    reverseStr(str);
    printf("%s\n", str);
}