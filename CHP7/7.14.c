/*
 * File: 7.14.c
 * File Created: 2023/09/20 20:47:25
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

// There are 5 courses and 10 students, create individual functions to:
// 1. Calc the avg score of each student
// 2. Calc the avg score of each course
// 3. Find the highest score acoss all courses and students, print which and who it is
// 4. Calc the variance of all the avg scores of courses

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Function to calculate the average score of each student
void calculateStudentAverage(float scores[][5], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        float sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += scores[i][j];
        }
        float average = sum / 5;
        printf("Average score of student %d: %.2f\n", i + 1, average);
    }
}

// Function to calculate the average score of each course
void calculateCourseAverage(float scores[][5], int numStudents) {
    for (int j = 0; j < 5; j++) {
        float sum = 0;
        for (int i = 0; i < numStudents; i++) {
            sum += scores[i][j];
        }
        float average = sum / numStudents;
        printf("Average score of course %d: %.2f\n", j + 1, average);
    }
}

// Function to find the highest score across all courses and students
void findHighestScore(float scores[][5], int numStudents) {
    float highestScore = 0;
    int studentIndex = 0;
    int courseIndex = 0;

    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < 5; j++) {
            if (scores[i][j] > highestScore) {
                highestScore = scores[i][j];
                studentIndex = i;
                courseIndex = j;
            }
        }
    }

    printf("Highest score: %.2f\n", highestScore);
    printf("Student: %d\n", studentIndex + 1);
    printf("Course: %d\n", courseIndex + 1);
}

// Function to calculate the variance
void calculateAverageVariance(float scores[][5], int numStudents) {
    float sum = 0;
    float sumSquared = 0;

    for (int j = 0; j < 5; j++) {
        float sum = 0;
        for (int i = 0; i < numStudents; i++) {
            sum += scores[i][j];
        }
        float average = sum / numStudents;
        sum += average;
        sumSquared += pow(average, 2);
    }

    float variance = sumSquared / 5 - pow(sum / 5, 2);
    printf("Variance: %.2f\n", variance);
}

int main() {
    // Example scores array
    float scores[10][5] = {{85, 90, 92, 88, 95}, {76, 82, 80, 78, 85}, {90, 92, 88, 85, 93}, {78, 80, 75, 82, 79},
                           {92, 97, 90, 89, 94}, {85, 88, 82, 90, 87}, {88, 85, 90, 92, 86}, {80, 82, 85, 88, 84},
                           {92, 90, 88, 84, 90}, {78, 82, 80, 85, 83}};

    calculateStudentAverage(scores, 10);
    printf("\n");
    calculateCourseAverage(scores, 10);
    printf("\n");
    findHighestScore(scores, 10);
    printf("\n");
    calculateAverageVariance(scores, 10);

    return 0;
}