/*
 * File: 7.12.c
 * File Created: 2023/09/20 20:32:41
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

// Newton approach to solve 1x^3 + 2x^2 + 3x + 4 = 0

#include <stdio.h>
#include <math.h>

double fx(double x) {
    return pow(x, 3) + 2*pow(x, 2) + 3*x + 4;
}

double dfx(double x) {
    return 3*pow(x, 2) + 4*x + 3;
}

double newtonSolve(double startnum) {
    double x = startnum;
    double x_prev = startnum + 0.5;
    double epsilon = 0.0000000000001;
    while (fabs(x - x_prev) > epsilon) {
        x_prev = x;
        x = x - fx(x)/dfx(x);
    }
    return x;
}


int main() {
    printf("x = %f\n", newtonSolve(1));
    return 0;
}