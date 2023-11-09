/*
 * File: goto.c
 * File Created: 2023/10/16 15:31:08
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

int main() {
loc1:
    goto loc2;
    printf("Skipped");
loc2:
    return 0;
}