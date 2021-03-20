#include <stdio.h>

int main() {
    double sum = 0;
    int numbersCount;

    printf("Ile liczby chcesz wprowadzic? ");
    scanf("%d", &numbersCount);

    for(int i=0; i<numbersCount; i++) {
        int number;
        printf("Wprowadz liczbe: ");
        scanf("%d", &number);
        sum += 1.0 / number;
    }
    printf("Srednia harmoniczna wynosi %lf", numbersCount / sum);

}