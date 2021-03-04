// Napisz program sprawdzający czy z podanych 3 boków przez użytkownika można zbudować trójkąt.

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Podaj dlugosci trzech bokow trojkata:\n");

    printf("Bok a=");
    scanf("%f", &a);

    printf("Bok b=");
    scanf("%f", &b);
    
    printf("Bok c=");
    scanf("%f", &c);

    if ( (a+b > c) && (a+c > b) && (b+c > a) ) {
        printf("Z podanych bokow mozna zbudowac trojkat.");
    } else {
        printf("Z podanych bokow nie mozna zbudowac trojkata.");
    }

    return 0;
}