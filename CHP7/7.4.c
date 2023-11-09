/*
 * File: 7.4.c
 * File Created: 2023/09/19 19:44:14
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

// Transpose a 3x3 matrix

#include <stdio.h>

void transpose(int mat[3][3]) {
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}

int main() {
    int initmat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transpose(initmat);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", initmat[i][j]);
        }
        printf("\n");
    }
    return 0;
}