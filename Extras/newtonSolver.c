/*
 * File: newtonSolver.c
 * File Created: 2023/10/16 15:45:13
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <math.h>
#include <stdio.h>

void derivativeFunc(double *polyCoef, int size) {
    // Implementation of the derivative function
    for (int i = 0; i < size; i++) {
        int pwr = size - i - 1;
        polyCoef[i] *= pwr;
    }
}

void printFunc(double *polyCoef, int size) {
    for (int i = 0; i < size; i++) {
        printf("%.2f, ", polyCoef[i]);
    }
    printf("\n");
}

void inputFunc(double *polyCoef, int size) {
    for (int i = 0; i < size; i++) {
        printf("Input ?*x^%d: ", size - i - 1);
        scanf("%lf", &polyCoef[i]);
    }
}

double calcFunc(double *polyCoef, int size, double x) {
    double result = 0;
    for (int i = 0; i < size; i++) {
        int pwr = size - i - 1;
        result += polyCoef[i] * pow(x, pwr);
    }
    return result;
}

void deepCopy(double *arr1, double *arr2, int size) {
    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
}

double newtonSolve(double startnum, double *polyCoef, double *polyCoefD, int size) {
    double x = startnum;
    double x_prev = startnum + 0.5;
    double epsilon = 0.0000000000001;
    while (fabs(x - x_prev) > epsilon) {
        x_prev = x;
        x = x - calcFunc(polyCoef, size, x) / calcFunc(polyCoefD, size - 1, x);
    }
    return x;
}

int main() {
    int size;
    printf("Enter the polynomial degree: ");
    scanf("%d", &size);
    double polyCoef[size];
    inputFunc(polyCoef, size);
    double polyCoefD[size];
    deepCopy(polyCoef, polyCoefD, size);
    derivativeFunc(polyCoefD, size);
    double startNum;
    printf("Enter the the x to begin with: ");
    scanf("%lf", &startNum);

    printf("x = %f\n", newtonSolve(startNum, polyCoef, polyCoefD, size));
    return 0;
}