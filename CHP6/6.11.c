/*
 * File: 6.11.c
 * File Created: 2023/09/19 17:51:04
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
    int space = 0;
    for(int i = 0; i < 5; i++) {
        for(int s = 0; s < space; s++) {
            printf("  ");
        }
        for(int j = 0; j < 5; j++) {
            printf("* ");
        }
        space++;
        printf("\n");
    }
}