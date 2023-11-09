/*
 * File: 6.12.c
 * File Created: 2023/09/19 17:53:40
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

// Caeser Encode Mirroring Variant

#include <stdio.h>
#include <string.h>
int main() {
    char str[50];
    printf("Input str: ");
    fgets(str, 50, stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 219 - str[i];
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 155 - str[i];
        }
    }
    printf("Output str: %s", str);
    return 0;
}