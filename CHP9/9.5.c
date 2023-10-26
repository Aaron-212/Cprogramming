/*
 * File: 9.5.c
 * File Created: 2023/10/26 10:13:42
 * Author: Aaon212 (aaron212cn@outlook.com)
 * 
 * Copyright 2023 Aaron212
 */

#include <stdio.h>

#define STUDENTS_COUNT 10

struct student {
    int num;
    char name[20];
    int score[3];
} students[STUDENTS_COUNT];

struct maxData {
    int max;
    int id;
};



void inputStudents() {
    for(int i=0; i<STUDENTS_COUNT; i++) {
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

double calcAvg(int *arr, int len) {
    double sum=0, result;
    for(int i=0; i<len; i++) {
        sum+=arr[i];
    }
    return sum/len;
}

struct maxData getMax(int *arr, int len) {
    int max=0, id=0;
    for(int i=0; i<len; i++) {
        if(arr[i] > max) {
            max = arr[i];
            id = i;
        }
    }
    return (struct maxData){max, id};
}


void printStudent(struct student s) {
    printf("ID Num: %d, Name: %s", s.num, s.name);
    printf("Score1: %d, Score2: %d, Score3: %d\n", s.score[0], s.score[1], s.score[2]);
    printf("AVG: %.2f\n\n", calcAvg(s.score, 3));
}


int main() {
    inputStudents();
    int course1[STUDENTS_COUNT], course2[STUDENTS_COUNT], course3[STUDENTS_COUNT];
    for(int i=0; i<STUDENTS_COUNT; i++) {
        course1[i] = students[i].score[0];
        course2[i] = students[i].score[1];
        course3[i] = students[i].score[2];
    }
    double avg1 = calcAvg(course1, STUDENTS_COUNT);
    double avg2 = calcAvg(course2, STUDENTS_COUNT);
    double avg3 = calcAvg(course3, STUDENTS_COUNT);

    struct maxData max1 = getMax(course1, STUDENTS_COUNT);
    struct maxData max2 = getMax(course2, STUDENTS_COUNT);
    struct maxData max3 = getMax(course3, STUDENTS_COUNT);
    printf("Course 1: Average: %.2f, Max: %d\n", avg1, max1.max);
    printStudent(students[max1.id]);
    printf("Course 2: Average: %.2f, Max: %d\n", avg2, max2.max);
    printStudent(students[max2.id]);
    printf("Course 3: Average: %.2f, Max: %d\n", avg3, max3.max);
    printStudent(students[max3.id]);

    return 0;
}