/*
 * File: 3.7.c
 * File Created: 2023/09/18 16:58:31
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include<stdio.h>
#include<math.h>

int main() {
    double r, h;

    printf("Please input r and h: ");
    scanf("%lf %lf", &r, &h);

    double circleC = 2 * M_PI * r;
    double circleS = M_PI * pow(r, 2);

    double sphereS = 4 * M_PI * pow(r, 2);
    double sphereV = 4 * M_PI * pow(r, 3) / 3;

    double cylinderV = circleS * h;

    printf("The circumference of circle is %.2f \n", circleC);
    printf("The area of circle is %.2f \n", circleS);
    printf("The area of sphere is %.2f \n", sphereS);
    printf("The volume of sphere is %.2f \n", sphereV);
    printf("The volume of cylinder is %.2f \n", cylinderV);

}