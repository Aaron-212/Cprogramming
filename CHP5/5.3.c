/*
 * File: 5.3.c
 * File Created: 2023/09/18 19:26:45
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

// 伟大的辗转相除法！
int gcd(int m, int n) {
    int t = 1;
    while (t != 0) {
        t = m % n;
        m = n;
        n = t;
    }
    return m;
}

int lcm(int m, int n) { return m * n / GCD(m, n); }

int main() {
    int m, n;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    printf("GCD: %d\nLCM: %d\n", gcd(m, n), lcm(m, n));
    return 0;
}