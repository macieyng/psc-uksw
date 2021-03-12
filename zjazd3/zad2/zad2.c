#include <stdio.h>

int main() {
    char asciiChar = 'a';
    while (asciiChar - 1 != 'z') {
        printf("%c", asciiChar);
        asciiChar ++;
    }
    printf("\n");
    asciiChar = 'A';
    while (asciiChar - 1 != 'Z') {
        printf("%c", asciiChar);
        asciiChar ++;
    }
    return 0;
}