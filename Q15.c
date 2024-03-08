#include <stdio.h>
#include <string.h>
#include <ctype.h> 

#define MAX_LENGTH 1000 

int main() {
    char input[MAX_LENGTH];
    int count[26] = {0}; 
    int i;

    printf("Input: ");
    fgets(input, MAX_LENGTH, stdin);


    for (i = 0; input[i] != '\0'; i++) {
        
        char ch = toupper(input[i]);
        
        if (ch >= 'A' && ch <= 'Z') {
            count[ch - 'A']++;
        }
    }


    printf("Output:\n");
    for (i = 0; i < 26; i++) {
        
        if (count[i] > 0) {
            printf("%c:%d\n", i + 'A', count[i]);
        }
    }

    return 0;
}
