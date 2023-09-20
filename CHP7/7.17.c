/*
 * File: 7.17.c
 * File Created: 2023/09/20 23:39:06
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>
#include <string.h>

char *strrev(char *str){
    char *p1, *p2;

    if (! str || ! *str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

// Convert base 10 Int num to string using iteration
void itoa(int num, char* str) {
    int i = 0;
    int sign = 0;
    if (num < 0) {
        sign = 1;
        num = -num;
    }
    while (num) {
        str[i++] = num % 10 + '0';
        num /= 10;
    }
    if (sign) {
        str[i++] = '-';
    }
    str[i] = '\0';
    strrev(str);
}

int main() {
    int num = 0;
    printf("Input a num:");
    scanf("%d", &num);
    char str[100];
    itoa(num, str);
    printf("%s\n", str);
    return 0;
}
