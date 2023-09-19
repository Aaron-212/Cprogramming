/*
 * File: 6.1.c
 * File Created: 2023/09/18 21:53:56
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

// Use selection alog to calc primes under 100

#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isNotPrime[100];
    int i, j;
    // Init isNotPrime
    for (i = 2; i < 100; i++) {
        isNotPrime[i] = true;
    }

    // Start selecting
    isNotPrime[0] = false;
    isNotPrime[1] = false;
    for (i = 2; i < 100; i++) {
        if (isNotPrime[i]) {
            for (j = i + i; j < 100; j += i) {
                isNotPrime[j] = false;
            }
        }
    }

    // Print results
    for (i = 0; i < 100; i++) {
        if (isNotPrime[i]) {
            printf("%d\n", i);
        }
    }
    return 0;
}