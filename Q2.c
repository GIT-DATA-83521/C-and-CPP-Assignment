#include <stdio.h>

long long unsigned int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if ( n< 0 ) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Factorial of %d = %llu\n", n, factorial(n));

    return 0;
}

