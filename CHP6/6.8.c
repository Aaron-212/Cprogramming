/*
 * File: 6.8.c
 * File Created: 2023/09/19 14:31:25
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

// Find the saddle point of a 2d array
// A saddle point means that the num on the point is the max of row, min of column
// There maybe no saddle point

#include <stdio.h>

int minarray(int *arr, int length) {
    int min = arr[0];
    for (int i = 0; i < length; i++) {
        //Compare elements of array with min
        if(arr[i] < min)
        min = arr[i];
    }
    return min;
}

int maxarray(int *arr, int length) {
    int max = arr[0];
    for (int i = 0; i < length; i++) {
        // Compare elements of array with max
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int a[5][5] = {
        {1, 2, 7, 4, 5},
        {5, 4, 6, 2, 1},
        {3, 4, 5, 4, 3},
        {5, 3, 8, 2, 1},
        {1, 4, 9, 2, 5}
    };

    int i, j, min, x, y;
    int tempmin;

    for(i=0; i<5; i++) {
        tempmin = 10;
        min = maxarray(a[i], 5);
        for(j=0; j<5; j++) {
            if (tempmin > a[j][i]) {
                tempmin = a[j][i];
                x = i;
                y = j;
            }
        }
        if(min==tempmin) {
            printf("Saddle point: %d at (%d, %d)\n", min, x+1, y+1);
            return 0;
        }
    }

    printf("There may by no saddle point");
    return 0;
}