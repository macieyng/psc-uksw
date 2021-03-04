// Napisz program, który po podaniu małej litery wypisze wielką, po podaniu wielkiej małą, 
// a gdy wybierzemy inny znak wypisze komunikat, że nie podano znaku z alfabetu.

#include <stdio.h>
#include <ctype.h>

int main() {
    char character;
    printf("Zamien wielkosc znaku\n----------------\n");

    printf("Podaj znak: ");
    scanf("%c", &character);

    if (isalpha(character)) {
        if (islower(character)) {
            character = toupper(character);
        } else {
            character = tolower(character);
        }
        printf("Twoj nowy znak: %c", character);
    } else {
        printf("Podany znak nie jest litera.");
    }

    return 0;
}