#include <stdio.h>

int main() {
    int marks1, marks2, marks3, marks4, marks5;
    int totalMarks;
    float average;
    char grade;

    printf("Enter marks for five subjects:\n");
    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);
    printf("Enter marks for subject 4: ");
    scanf("%d", &marks4);
    printf("Enter marks for subject 5: ");
    scanf("%d", &marks5);
    
    if (marks1 < 0 || marks1 > 100 || marks2 < 0 || marks2 > 100 ||
        marks3 < 0 || marks3 > 100 || marks4 < 0 || marks4 > 100 ||
        marks5 < 0 || marks5 > 100) {
        printf("Invalid marks entered. Marks should be between 0 and 100.\n");
        return 1;
    }

    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;

    average = (float)totalMarks / 5.0;

    if (average >= 90) {
        grade = 'X';
    } else if (average >= 80) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
