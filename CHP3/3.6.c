/*
 * File: 3.6.c
 * File Created: 2023/09/18 16:31:01
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

/*
 * 作者注：
 * 我超捷径了，不用c1~c5，直接上[char]
 * 疑似凯撒加密，不确定，再看一眼
 * 就会爆炸
 * 注意ASCII的范围，如果加到符号区或者什么其他的地方记得-26
 */

#include <stdio.h>
#include <string.h>

int main() {
    char inputString[20];
    int i, enc;
    int offset = 4;

    printf("Enter string to encrypt (max 20 chars, no space): ");
    fgets(inputString, 20, stdin);

    int len = strlen(inputString);
    for(i=0; i<len; i++) {
        enc = inputString[i] + offset;

        if((90<enc && enc<97) || (123<enc && enc<127)) {
            printf("%c", enc-26);
        } else {
            printf("%c", enc);
        }
    }
    return 0;
}