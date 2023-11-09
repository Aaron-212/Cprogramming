/*
 * File: 5.4.c
 * File Created: 2023/09/18 19:34:30
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;
    printf("Enter a string: ");
    fgets(str, 50, stdin);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (65 <= str[i] && str[i] <= 90) {
            letterCount++;
        } else if (97 <= str[i] && str[i] <= 122) {
            letterCount++;
        } else if (48 <= str[i] && str[i] <= 57) {
            digitCount++;
        } else if (str[i] == 32) {
            spaceCount++;
        } else {
            otherCount++;
        }
    }
    printf("letterCount : %d\n", letterCount);
    printf("spaceCount : %d\n", spaceCount);
    printf("digitCount : %d\n", digitCount);
    printf("otherCount : %d\n", otherCount);
    return 0;
}