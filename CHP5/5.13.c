/*
 * File: 5.13.c
 * File Created: 2023/09/18 21:20:14
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    double x = a/2;
    for(int i=0; i<100; i++) {
        x = 0.5*(x+a/x);
    }
    printf("x = %f\n", x);
    printf("sqrt(a) = %f\n", sqrt(a));
    return 0;
}