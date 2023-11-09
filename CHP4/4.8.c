/*
 * File: 4.8.c
 * File Created: 2023/09/18 17:26:10
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("Grade is A");
    } else if (score >= 80) {
        printf("Grade is B");
    } else if (score >= 70) {
        printf("Grade is C");
    } else if (score >= 60) {
        printf("Grade is D");
    } else {
        printf("Grade is E");
    }

    return 0;
}