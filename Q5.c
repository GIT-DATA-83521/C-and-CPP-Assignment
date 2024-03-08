#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int uppercase_count = 0, lowercase_count = 0, digit_count = 0, other_count = 0;

    printf("Enter a string: ");

    while ((ch = getchar()) != '\n') {
        if (isupper(ch)) {
            uppercase_count++;
        } else if (islower(ch)) {
            lowercase_count++;
        } else if (isdigit(ch)) {
            digit_count++;
        } else {
            other_count++;
        }
    }

    printf("Uppercase characters: %d\n", uppercase_count);
    printf("Lowercase characters: %d\n", lowercase_count);
    printf("Digits: %d\n", digit_count);
    printf("Other characters: %d\n", other_count);

    return 0;
}
