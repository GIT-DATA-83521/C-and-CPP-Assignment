#include <stdio.h>

#define MAX_SIZE 10

void multiplyMatrices(int first[][MAX_SIZE], int second[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int rows2, int cols2) {
    int i, j, k;

    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols2; ++j) {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols2; ++j) {
            for (k = 0; k < cols1; ++k) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int first[MAX_SIZE][MAX_SIZE], second[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;
    int i, j;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter elements for first matrix:\n");
    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols1; ++j) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Error! Columns of first matrix not equal to rows of second.\n");
        return 1;
    }

    printf("Enter elements for second matrix:\n");
    for (i = 0; i < rows2; ++i) {
        for (j = 0; j < cols2; ++j) {
            scanf("%d", &second[i][j]);
        }
    }

    printf("\nFirst Matrix:\n");
    displayMatrix(first, rows1, cols1);

    printf("\nSecond Matrix:\n");
    displayMatrix(second, rows2, cols2);

    multiplyMatrices(first, second, result, rows1, cols1, rows2, cols2);

    printf("\nResult Matrix:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}
