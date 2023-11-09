/*
 * File: 8.5.c
 * File Created: 2023/09/23 16:53:56
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>
#include <stdlib.h>

void deleteArrElement(int pos, int len, int *arr) {
    for (int i = pos; i < len - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int n = 0;
    int i = 0;
    int j = 0;
    scanf("%d", &n);
    int arr[n]; // Dynamically allocate memory for the array
    int max = n;
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    while (n > 1) {
        for (i = 0; i < max; i++) {
            if ((i + 1) % 3 == 0) {
                deleteArrElement(i % n, n, arr);
                n--;
            }
        }
    }
    printf("The remaining one is #%d\n", arr[0]);

    return 0;
}