/*
 * File: 7.13.c
 * File Created: 2023/09/20 20:42:47
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>
#include <math.h>

double legendre(int n, double x) {
	if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else {
		return ((2 * n - 1) * x * legendre(n - 1, x) - (n - 1) * legendre(n - 2, x)) / n;
	}
}

int main() {
	int n;
    double x;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Legendre(%d, %lf) = %lf\n", n, x, legendre(n, x));
	return 0;
}