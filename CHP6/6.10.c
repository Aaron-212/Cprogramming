/*
 * File: 6.10.c
 * File Created: 2023/09/19 17:45:00
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

// 同5.4

#include <stdio.h>
#include <string.h>

int main() {
    char str[1024];
    int capLetterCount=0;
    int smallLetterCount=0;
    int spaceCount=0;
    int digitCount=0;
    int otherCount=0;
    printf("Enter a passage: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    for(int i=0; i<len; i++) {
        if (65<=str[i] && str[i]<=90) {
            capLetterCount++;
        } else if(97<=str[i] && str[i]<=122) {
            smallLetterCount++;
        } else if(48<=str[i] && str[i]<=57) {
            digitCount++;
        } else if(str[i] == 32) {
            spaceCount++;
        } else {
            otherCount++;
        }
    }
    printf("capLetterCount : %d\n", capLetterCount);
    printf("smallLetterCount : %d\n", smallLetterCount);
    printf("spaceCount : %d\n", spaceCount);
    printf("digitCount : %d\n", digitCount);
    printf("otherCount : %d\n", otherCount);
    return 0;
}