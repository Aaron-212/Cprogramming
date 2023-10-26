/*
 * File: 9.4.c
 * File Created: 2023/10/09 15:24:41
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

struct student {
    int num;
    char name[20];
    int score[3];
} students[5];


void inputStudents() {
    for(int i=0; i<5; i++) {
        printf("Enter student ID Num for student #%d: ",i);
        scanf("%d", &students[i].num);
        getchar();  // Clear the input buffer

        printf("Enter student name for student #%d: ",i);
        fgets(students[i].name, 20, stdin);

        for(int j=0; j<3; j++) {
            printf("Enter student #%d score #%d: ",i ,j);
            scanf("%d", &students[i].score[j]);
        }
    }
}

void printStudents() {
    for(int i=0; i<5; i++) {
        printf("ID Num: %d, Name: %s\n", students[i].num, students[i].name);
        printf("Score1: %d, Score2: %d, Score3: %d\n", students[i].score[0], students[i].score[1], students[i].score[2]);
    }
    
}


int main() {
    inputStudents();
    printStudents();
    return 0;
}