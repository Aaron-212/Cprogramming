/*
 * File: 8.3.c
 * File Created: 2023/09/21 19:02:11
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

void inputNumbers(int *nums) {
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }
}

void swapMinMax(int *nums) {
    int *minPtr = nums;
    int *maxPtr = nums;
    
    for (int i = 1; i < 10; i++) {
        if (nums[i] < *minPtr) {
            minPtr = &nums[i];
        }
        if (nums[i] > *maxPtr) {
            maxPtr = &nums[i];
        }
    }
    
    // Swap min with first number
    int temp = *minPtr;
    *minPtr = nums[0];
    nums[0] = temp;
    
    // Swap max with last number
    temp = *maxPtr;
    *maxPtr = nums[9];
    nums[9] = temp;
}

void outputNumbers(int *nums) {
    printf("Swapped numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int numbers[10];
    inputNumbers(numbers);
    swapMinMax(numbers);
    outputNumbers(numbers);
    return 0;
}