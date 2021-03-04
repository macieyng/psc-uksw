// Napisz program, który po wprowadzeniu liczby wypisze jego znak ASCII oraz następnie poprosi o znak i wypisze kod ASCII.

#include <stdio.h>
#include <ctype.h>

int main() {
    int number;
    char character;

    printf("Daj mi liczbe, a dam Ci znak\n------------------\n");

    printf("Wprowadz liczbe: ");
    number = getchar();

    printf("Twoja liczba jako znak ASCII: %c\n", number);
    fflush(stdin);

    printf("Wprowadz znak ASCII: ");
    character = getchar();
    
    printf("Twoj znak ASCII jako liczba: %d\n", character);

    return 0;
}