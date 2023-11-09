/*
 * File: 4.10.c
 * File Created: 2023/09/18 18:44:39
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
    int income, reward;
    reward = 0;
    printf("Enter your income: ");
    scanf("%d", &income);
    if (income >= 1000000) {
        reward += (income - 1000000) * 0.001;
        income = 1000000;
    }
    if (income >= 600000) {
        reward += (income - 600000) * 0.015;
        income = 600000;
    }
    if (income >= 400000) {
        reward += (income - 400000) * 0.03;
        income = 400000;
    }
    if (income >= 200000) {
        reward += (income - 200000) * 0.05;
        income = 200000;
    }
    if (income >= 100000) {
        reward += (income - 100000) * 0.075;
        income = 100000;
    }
    if (income >= 0) {
        reward += income * 0.1;
    }

    printf("Your reward is: %d\n", reward);
    return 0;
}