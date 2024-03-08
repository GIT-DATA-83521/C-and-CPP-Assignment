#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char mystring[100];

    printf("Enter a string: ");
    scanf("%s", mystring);

    reverseString(mystring);

    printf("Reversed string: %s\n", mystring);

    return 0;
}
