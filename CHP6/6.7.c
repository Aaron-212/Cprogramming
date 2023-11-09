/*
 * File: 6.7.c
 * File Created: 2023/09/19 14:16:55
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

// The magic matrix
// A matrix that its sum of each rows, columns or diagnol lines are equal.

#include <stdio.h>

int main() {
    int a[31][31] = {0};
    int i, j, n, k;
    i = 1;
    printf("Input N (odd num, 3~25): ");
    scanf("%d", &n);
    j = n / 2 + 1;
    a[i][j] = 1;
    for (k = 2; k <= n * n; k++) {
        i = i - 1;
        j = j + 1;
        if ((i <= 0) && (j <= n)) {
            i = n;
        }
        if ((i <= 0) && (j > n)) {
            i = i + 2;
            j = j - 1;
        }
        if (j > n) {
            j = 1;
        }
        if (a[i][j] == 0) {
            a[i][j] = k;
        } else {
            i = i + 2;
            j = j - 1;
            a[i][j] = k;
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}