/*
 * File: 7.3.c
 * File Created: 2023/09/19 19:42:19
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int isPrime(int a) {
	int i;
	for (i = 2; i < a; i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
    int inputNum;

    printf("Please input a number: ");
    scanf("%d", &inputNum);
    printf("The number %d is %s.\n", inputNum, isPrime(inputNum) ? "prime" : "not prime");
    return 0;
}