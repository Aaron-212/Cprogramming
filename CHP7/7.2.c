/*
 * File: 7.2.c
 * File Created: 2023/09/19 19:25:26
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include<stdio.h>


int deltag0(double a, double b, double delta, double *roots) {
    double x1 = (-b+delta)/(2*a);
    double x2 = (-b-delta)/(2*a);
    roots[0] = x1;
    roots[1] = x2;
    return 2;
}

int deltae0(double a, double b, double *roots) {
    double x = (-b)/(2*a);
    roots[0] = x;
    return 1;
}

int deltas0(double *roots) {
    return 0;
}

int main() {
    int a,b,c;
    double roots[2];
    printf("Please input a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    double delta = b*b-4*a*c;
    if (delta>0) {
        deltag0(a,b,delta,roots);
        printf("roots: %f, %f\n",roots[0],roots[1]);
    } else if (delta==0) {
        deltae0(a,b,roots);
        printf("root: %f\n",roots[0]);
    } else {
        printf("No roots\n");
    }
    return 0;
}