/*
 * File: 5.16.c
 * File Created: 2023/09/18 21:39:15
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

// 用了两遍循环，一般

#include<stdio.h>

int main() {
    int l = 4;
    int i = 1;
    int j = 0;
    int k = 0;
    for(i=1; i<=4; i++) {
        for(j=0; j<l-i; j++) {
            printf(" ");
        }
        for(k=1; k<=i*2-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    for(i=3; i>=1; i--) {
        for(j=0; j<l-i; j++) {
            printf(" ");
        }
        for(k=1; k<=i*2-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}