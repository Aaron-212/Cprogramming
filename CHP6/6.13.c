/*
 * File: 6.13.c
 * File Created: 2023/09/19 17:59:22
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

// Connect two string without'strcat','strlen' or <string.h>

#include <stdio.h>

int find_length(char *input) {
    int length = 0;
    while (input[length] != '\n') //  remove ;
    {
        length++;
    }
    return length;
}

int main() {
    // Declare two strings
    char str1[50];
    char str2[50];
    // Declare a final string
    char finalstr[100];
    // Get two strings from the user
    printf("Input string 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Input string 2: ");
    fgets(str2, sizeof(str2), stdin);
    // Find the length of the two strings
    int len1 = find_length(str1);
    int len2 = find_length(str2);
    // Loop through the two strings
    for (int i = 0; i < len1 + len2; i++) {
        // If the current index is less than the length of the first string
        if (i < len1) {
            // Set the current index to the first string
            finalstr[i] = str1[i];
        }
        // If the current index is greater than the length of the first string
        else {
            // Set the current index to the second string
            finalstr[i] = str2[i - len1];
        }
    }
    // Print the final string
    printf("%s\n", finalstr);
    return 0;
}