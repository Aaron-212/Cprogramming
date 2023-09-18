/*
 * File: 3.2.c
 * File Created: 2023/09/18 16:09:23
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include<stdio.h>
#include<math.h>

int main() {
    const double OneYearDepositRate = 0.015;
    const double TwoYearDepositRate = 0.021;
    const double ThreeYearDepositRate = 0.0275;
    const double FiveYearDepositRate = 0.03;
    const double QuaterDemandRate = 0.0035;

    // 方案一 5年期
    double plan1_r = 1000*(1+5*FiveYearDepositRate);

    // 方案二 2年期+3年期
    double plan2_1 = 1000*(1+2*TwoYearDepositRate);
    double plan2_r = plan2_1*(1+3*ThreeYearDepositRate);

    // 方案三 3年期+2年期
    double plan3_1 = 1000*(1+3*ThreeYearDepositRate);
    double plan3_r = plan3_1*(1+2*TwoYearDepositRate);

    // 方案四 5次1年期
    double plan4_r = 1000*pow((1+OneYearDepositRate), 5);

    // 方案五 季度结算活期
    double plan5_r = 1000*pow((1+QuaterDemandRate/4), 4*5);

    printf("Plan1: %f CNY", plan1_r);
    printf("Plan2: %f CNY", plan2_r);
    printf("Plan3: %f CNY", plan3_r);
    printf("Plan4: %f CNY", plan4_r);
    printf("Plan5: %f CNY", plan5_r);

    return 0;
}