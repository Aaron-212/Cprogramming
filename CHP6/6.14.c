/*
 * File: 6.14.c
 * File Created: 2023/09/19 18:22:49
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include<stdio.h>
#include<string.h>

#define MIN(a,b) (((a)<(b))?(a):(b))

int main() {
    char s1[50];
    char s2[50];
    int sum=0;

    printf("Enter a string: ");
    fgets(s1, 50, stdin);
    printf("Enter another string: ");
    fgets(s2, 50, stdin);

    int minlen = MIN(strlen(s1), strlen(s2));

    for(int i = 0; i < minlen; i++) {
        sum+=s1[i]-s2[i];
    }

    printf("%d\n", sum);
    return 0;
}