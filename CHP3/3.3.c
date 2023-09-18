/*
 * File: 3.3.c
 * File Created: 2023/09/18 16:18:41
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */


#include<stdio.h>
#include<math.h>

int main() {
    int d = 300000;
    int p = 6000;
    double r = 0.01;
    double m = (log10(p/(p-d*r)))/log10(1+r);

    printf("You need the following months:");
    printf("m=%.1f\n", m);

    return 0;
}