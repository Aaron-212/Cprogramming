/*
 * File: 8.4.c
 * File Created: 2023/09/21 19:09:36
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

// Function to reverse elements in the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array by a given number of positions
void rotateArray(int arr[], int n, int num) {
    // Normalize the rotation count
    num = num % n;

    // If num is negative, convert it to positive rotation
    if (num < 0) {
        num = num + n;
    }

    // Rotate the array in three steps
    // Step 1: Reverse the first part of the array
    reverse(arr, 0, num - 1);

    // Step 2: Reverse the second part of the array
    reverse(arr, num, n - 1);

    // Step 3: Reverse the entire array
    reverse(arr, 0, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 2; // Number of positions to move
    
    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Rotate the array
    rotateArray(arr, n, num);

    // Print the rotated array
    printf("\nRotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}