/*
 * File: 5.8.c
 * File Created: 2023/09/18 20:00:17
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include<stdio.h>
#include<math.h>
int main() {
    int i;
    int a,b,c, newpow;
    for(i=100; i<=999; i++) {
        a = i /100;
        b = (i/10)%10;
        c = i%10;
        newpow = pow(a,3)+pow(b,3)+pow(c,3);
        if (newpow == i) {
            printf("%d is a daffodil num\n", i);
        }
    }
    return 0;
}