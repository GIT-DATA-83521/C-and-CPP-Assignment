#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define NAME_LENGTH 50

int compareNames(const void *a, const void *b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][NAME_LENGTH];
    char *namePointers[MAX_STUDENTS];
    int numStudents = 0;

    printf("Enter names of students (up to 10). Enter 'done' to finish.\n");
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        printf("Enter name %d: ", i + 1);
        if (fgets(nameOfStudents[i], NAME_LENGTH, stdin) != NULL) {
            nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = 0; 

            if (strcmp(nameOfStudents[i], "done") == 0) {
                break;
            }
            namePointers[i] = nameOfStudents[i];
            numStudents++;
        } else {
            printf("Error reading input.\n");
            return 1;
        }
    }

    qsort(namePointers, numStudents, sizeof(char*), compareNames);

    printf("\nSorted student names:\n");
    for (int i = 0; i < numStudents; ++i) {
        printf("%s\n", namePointers[i]);
    }

    return 0;
}
