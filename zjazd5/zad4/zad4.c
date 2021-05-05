#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Napisz program, który umożliwi pomoc w rozstrzyganiu problemu. 
// Prowadzący stoi przed dylematem wyboru sposobu odrabiania zajęć. Ma 3 warianty:
// - Realizować zajęcia nr 15
// - Zrealizować poprawę dla studentów przed I terminem egzaminu
// - zasymulować chorobę i odwołać zajęcia
// Zrealizuj program z uwzględnieniem „wagi” przy pomocy stałych. Domyślnie program 
// ma 0,333 szans na trafienie każdego wariantu, jednak za pomocą 
// modyfikacji wartości stałych będzie w stanie zmieniać prawdopodobieństwo z dokładnością 
// do 3 miejsca po przecinku np. może ustawić, że szansa wylosowania choroby 
// będzie stanowić 0,998 szans na wylosowanie a pozostałe warianty 0,001 itp.

#define WEIGHT_1 0.333
#define WEIGHT_2 0.333
#define WEIGHT_3 0.334

int options[1000];

int main() {
    int counter = 0, randomChoice = 0, randomOption = 0, opt1 = 0, opt2 = 0, opt3 = 0;
    for (int i=counter; i<WEIGHT_1*1000+counter; i++) {
        options[i] = 1;
    }
    counter = WEIGHT_1 * 1000 + counter;
    for (int i=counter; i<WEIGHT_2*1000+counter; i++) {
        options[i] = 2;
    }
    counter = WEIGHT_2 * 1000 + counter;
    for (int i=counter; i<WEIGHT_3*1000+counter; i++) {
        options[i] = 3;
    }
    counter = WEIGHT_3 * 1000 + counter;
    if (counter != 1000) return 1;

    srand(time(NULL));

    randomChoice = rand() % 1000;
    randomOption = options[randomChoice];

    if (randomOption == 1) printf("Realizowac zajecia nr 15");
    else if (randomOption == 2) printf("Zrealizowac poprawe dla studentow przed I terminem egzaminu");
    else printf("Zasymulowac chorobe i odwolac zajecia");
    printf("\n");

    return 0;
}
