/*
 * File: 7.9.c
 * File Created: 2023/09/20 19:39:34
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

// 同5.4

#include <stdio.h>
#include <string.h>

void countLetter(char *str, int *count) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (65 <= str[i] && str[i] <= 90) {
            count[0]++;
        } else if (97 <= str[i] && str[i] <= 122) {
            count[1]++;
        } else if (48 <= str[i] && str[i] <= 57) {
            count[2]++;
        } else if (str[i] == 32) {
            count[3]++;
        } else {
            count[4]++;
        }
    }
}

int main() {
    char str[1024];
    int count[5];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    countLetter(str, count);
    printf("capLetterCount : %d\n", count[0]);
    printf("smallLetterCount : %d\n", count[1]);
    printf("digitCount : %d\n", count[2]);
    printf("spaceCount : %d\n", count[3]);
    printf("otherCount : %d\n", count[4]);
    return 0;
}