/*
 * File: 5.6.c
 * File Created: 2023/09/18 19:53:45
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
    int i, j;
    unsigned long result = 0;
    unsigned long temp = 1;

    for(i=0; i<20;i++) {
        for(j=1; j<=i; j++) {
            temp *= j;
        }
        result += temp;
        temp = 1;
    }
    printf("result = %lu\n", result);
    return 0;
}