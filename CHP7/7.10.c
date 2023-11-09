/*
 * File: 7.10.c
 * File Created: 2023/09/20 19:43:16
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>
#include <string.h>

void findLongestWord(char *str, char *longeststr, int *len) {
    char *pch = strtok(str, " ,.-");
    while (pch != NULL) {
        if (strlen(pch) > *len) {
            *len = strlen(pch);
            strcpy(longeststr, pch);
        }
        pch = strtok(NULL, " ,.-");
    }
}

int main() {
    char str[100];
    char longeststr[20];
    int len = 0;
    printf("Enter a line of text: ");
    fgets(str, 100, stdin);
    findLongestWord(str, longeststr, &len);
    printf("The first longest word is \"%s\", with %d letters.\n", longeststr, len);
    return 0;
}