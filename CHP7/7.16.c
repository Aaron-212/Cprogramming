/*
 * File: 7.16.c
 * File Created: 2023/09/20 23:35:21
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */


#include <stdio.h>

int hexChar2dec(char hex_num) {
    if (hex_num >= '0' && hex_num <= '9') {
        return hex_num - '0';
    } else if (hex_num >= 'a' && hex_num <= 'f') {
        return hex_num - 'a' + 10;
    } else if (hex_num >= 'A' && hex_num <= 'F') {
        return hex_num - 'A' + 10;
    } else {
        return -1;
    }
}

int hexStr2decNum(char* hex_str, int hex_str_len) {
    int ret = 0;
    for (int i = 0; i < hex_str_len; i++) {
        ret = ret * 16 + hexChar2dec(hex_str[i]);
    }
    return ret;
}

int main() {
    char hex_str[] = "0x123456789abcdef";
    int hex_str_len = sizeof(hex_str) - 2;
    int dec_num = hexStr2decNum(hex_str, hex_str_len);
    printf("%d\n", dec_num);
    return 0;
}