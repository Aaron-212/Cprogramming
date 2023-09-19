/*
 * File: 6.2.c
 * File Created: 2023/09/19 12:24:38
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

// Selection Sort 10 nums

#include<stdio.h>

int main() {
	int a[10];
	int i, j, min, temp;
	for (i = 0; i < 10; i++) {
        printf("Input %d num: ", i + 1);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		min = i;
		for (j = i + 1; j < 10; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}