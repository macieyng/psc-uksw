// Napisz program który sprawdzi, która z podanych trzech liczb przez użytkownika jest największa.

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Podaj trzy liczby:\n");

    printf("Liczba 1: ");
    scanf("%f", &a);

    printf("Liczba 2: ");
    scanf("%f", &b);
    
    printf("Liczba 3: ");
    scanf("%f", &c);

    if ( a > b && a > c ) {
        printf("Najwieksza jest pierwsza liczba (%f)", a);
    } else if ( b > a && b > c ) {
        printf("Najwieksza jest druga liczba (%f)", b);
    } else {
        printf("Najwieksza jest trzecia liczba (%f)", c);
    }

    return 0;
}