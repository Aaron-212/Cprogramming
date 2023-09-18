/*
 * File: 4.9.c
 * File Created: 2023/09/18 17:28:43
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

// 不是很美观

#include <stdio.h>
#include <math.h>

int main() {
    int j, N, con;
    int i = 0;

    printf("Input N: ");
    scanf("%d", &N);

    int digits = log10(N)+1;
    printf("digits = %d\n", digits);
    int arr[digits];
    for (j = digits - 1; j > -1; j--) {
        con = N / pow(10, j);
        N = N % (int)pow(10, j);
        printf("%d", con);
        arr[j] = con;
    }
    printf("\n");
    for (j = 0; j < digits; j++) {
        printf("%d", arr[j]);
    }
    return 0;
}