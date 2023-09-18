/*
 * File: 4.5.c
 * File Created: 2023/09/18 17:17:15
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>
#include<math.h>

int main() {
    int inputInt;

    printf("Please enter an integer: ");
    scanf("%d", &inputInt);
    if (inputInt > 1000) {
        printf("The number is greater than 1000.\n");
        main();
        return -1;
    }
    int result = sqrt(inputInt);
    printf("The int square root of %d is %d.\n", inputInt, result);

    return 0;
}