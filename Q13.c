#include <stdio.h>
#include <string.h>

int main() {
    char* myStrings[] = {"apple", "banana", "apple", "grape", "banana", "orange", "grape"};

    int numStrings = sizeof(myStrings) / sizeof(myStrings[0]);

    printf("Original strings:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", myStrings[i]);
    }

    printf("\nDuplicated strings:\n");
    for (int i = 0; i < numStrings; i++) {
        for (int j = i + 1; j < numStrings; j++) {
            if (strcmp(myStrings[i], myStrings[j]) == 0) {
                printf("%s\n", myStrings[i]);
                break; // Avoid printing the same duplicate multiple times
            }
        }
    }

    return 0;
}
