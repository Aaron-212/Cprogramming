/*
 * File: 5.15.c
 * File Created: 2023/09/18 21:32:34
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <math.h>
#include <stdio.h>

double fx(double x) { return 2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6; }

// 二分法求根
int main() {
    double down = -10.0;
    double up = 10.0;
    double mid;
    if (fx(down) * fx(up) > 0) {
        printf("Error: 区间内无根\n");
        return -1;
    }
    for (int i = 0; i < 100; i++) {
        mid = (down + up) / 2;
        if (fx(mid) == 0) {
            break;
        }
        if (fx(mid) * fx(down) < 0) {
            up = mid;
        } else
            down = mid;
    }
    printf("根为：%lf\n", mid);
    return 0;
}