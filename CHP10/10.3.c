/*
 * File: 10.3.c
 * File Created: 2023/10/26 10:49:45
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int writeFile(char *filename, char *data) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        return -1;
    }
    fputs(data, fp);
    fclose(fp);
    return 0;
}

int main() {
    char inputText[50];
    printf("Input text: ");
    fgets(inputText, 50, stdin);

    writeFile("test.temp.txt", inputText);

    return 0;
}