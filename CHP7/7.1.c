/*
 * File: 7.1.c
 * File Created: 2023/09/19 19:24:57
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

// 同5.3

#include <stdio.h>

int gcd(int m, int n) {
    int t = 1;
    while(t != 0) {
        t = m % n;
        m = n;
        n = t;
    }
    return m;
}

int lcm(int m, int n) {
	return m * n / GCD(m, n);
}

int main() {
    int m, n;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    printf("GCD: %d\nLCM: %d\n", gcd(m, n), lcm(m, n));
    return 0;
}