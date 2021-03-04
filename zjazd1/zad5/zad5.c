// Napisz program zwracający część ułamkową podanej liczby. Np. dla 3,1419 zwróci 0,1419
#include <stdio.h>

int main() {
    float number, decimalPart;
    int integer;
    printf("Podaj liczbe niecalkowita: ");
    scanf("%f", &number);
    integer = number / 1;
    decimalPart = number - integer;
    printf("Czesc ulamkowa to: %f", decimalPart);
    return 0;
}