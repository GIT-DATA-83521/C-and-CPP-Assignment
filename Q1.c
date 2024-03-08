#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }

    int* numbers = (int*)malloc(n * sizeof(int));


    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int max_number = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
    }

    printf("Maximum number is: %d\n", max_number);

    
    free(numbers);

    return 0;
}
