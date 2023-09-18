/*
 * File: 4.11.c
 * File Created: 2023/09/18 19:05:42
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include<stdio.h>

void swap(int *a,int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp; 
}

int main() {
    int a,b,c,d;

    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    // Magical Sort lol(
    if(a>b) swap(&a,&b);
    if(c>d) swap(&c,&d);
    if(a>c) swap(&a,&c);
    if(b>d) swap(&b,&d);
    if(b>c) swap(&b,&c);

    printf("The sorted numbers are: %d %d %d %d \n",a,b,c,d);
    return 0;
}