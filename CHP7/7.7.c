/*
 * File: 7.7.c
 * File Created: 2023/09/19 20:06:54
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include<stdio.h>

int main() {
    char s1[50];
    char s2[50];

    printf("Enter a string: ");
    fgets(s1, 50, stdin);
    int j = 0;
    for(int i=0; i<50; i++) {
        if (s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U' || 
        s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u') {
            s2[j] = s1[i];
            j++;
        }
    }
    s2[j] = '\0';
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);

    return 0;
}