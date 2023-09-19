/*
 * File: 6.7.c
 * File Created: 2023/09/19 14:16:55
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

// The magic matrix
// A matrix that its sum of each rows, columns or diagnol lines are equal.

#include<stdio.h>

int main() {
    int a[31][31]={0};
    int i,j,n,k;
    i=1;
    printf("Input N (odd num, 3~25): ");
    scanf("%d",&n);
    j=n/2+1;
    a[i][j]=1;
    for(k=2;k<=n*n;k++) {
        i=i-1;
        j=j+1;
        if((i<=0)&&(j<=n)) //如果竖排挪到顶，同时横排还没有超过最右，竖排就到从最下再继续。
        {
            i=n; 
        }
        if((i<=0)&&(j>n)) //如果竖排挪到顶，同时横排超过最右，竖排往下挪两位，横排往左移一位。
        { 
                i=i+2; 
                j=j-1; 
        } 
        if(j>n) //如果只有横排超过最右，横排挪到左边第二行。
        { 
            j=1; 
        } 
        if(a[i][j]==0)
        {
          a[i][j]=k; //如果这个位置还没有赋值，那么赋值为k。
        }
        else  //已经赋值过了。那么竖排往下挪两位，横排往左移一位，再赋值为k。
        { 
            i=i+2; 
            j=j-1; 
            a[i][j]=k;
        } 
    } 
    for(i=1;i<=n;i++) 
    {
        for(j=1;j<=n;j++)
        {
        printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
}