#include <stdio.h>

typedef struct {
    char studentName[50];
    char rollNo[20];
    int totalMarks;
} Student;

void readStudentData(Student *s) {
    printf("Enter student name: ");
    scanf("%s", s->studentName);  

    printf("Enter roll number: ");
    scanf("%s", s->rollNo);

    printf("Enter total marks: ");
    scanf("%d", &s->totalMarks);
}


void displayStudentData(const Student *s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s->studentName);
    printf("Roll Number: %s\n", s->rollNo);
    printf("Total Marks: %d\n", s->totalMarks);
}

int main() {
    Student student;

    readStudentData(&student);
    displayStudentData(&student);

    return 0;
}
