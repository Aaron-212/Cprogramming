/*
 * File: 7.6.c
 * File Created: 2023/09/19 19:53:20
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>
#include <string.h>

void connect(char *s1, char *s2, char *finalstr) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    // Loop through the two strings
    for (int i = 0; i < len1 + len2 - 1; i++) {
        // If the current index is less than the length of the first string
        if (i < len1 - 1) {
            // Set the current index to the first string
            finalstr[i] = s1[i];
        }
        // If the current index is greater than the length of the first string
        else {
            // Set the current index to the second string
            finalstr[i] = s2[i - len1 + 1];
        }
    }
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
    connect(str1, str2, finalstr);
    // Print the final string
    printf("%s\n", finalstr);
    return 0;
}