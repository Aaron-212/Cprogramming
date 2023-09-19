/*
 * File: 6.3.c
 * File Created: 2023/09/19 12:30:18
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
	int matrix[3][3];
	int sum;
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	sum = 0;
	for (i = 0; i < 3; i++) {
		sum += matrix[i][i];
	}
	for (i = 0; i < 3; i++) {
		sum += matrix[i][2 - i];
	}
	printf("%d\n", sum);
	return 0;
}