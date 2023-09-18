/*
 * File: 1.6.c
 * File Created: 2023/09/18 15:38:06
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */


#include<stdio.h>

int main() {
    int a,b,c;

    printf("Enter 3 numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ( a > b && a > c ) {
        printf("a is the largest.");
    } else if ( b > a && b > c ) {
        printf("b is the largest.");
    } else if ( c > a && c > b ) {
        printf("c is the largest.");
    } else {
        printf("Values are not unique");
    }
    
    return 0;
}