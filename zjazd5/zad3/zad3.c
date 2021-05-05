#include <stdio.h>
#include <stdlib.h>
#include <time.h>       /* time */

// Napisz program, który umożliwi grę w totolotka tzn., pozwoli na 
// wprowadzenie 6 różnych liczb podanych przez użytkownika, a następnie 
// przy użyciu metod rand i srand wylosuje wyniki totolotka 
// (6 liczb z zakresu 1-49 bez zwracania). Wyniki generatora 
// zostaną wypisane i program poda ile trafień miał użytkownik.
//  Przetestuj program ze studentem siedzącym obok.

#define ARRAY_SIZE 6

int main() {
    int userNumbers[ARRAY_SIZE] = {0}, randomNumbers[ARRAY_SIZE] = {0};
    int randomNumber = 0, score = 0;
    printf("Wprowadz %d liczb z zakresu 1-49\n", ARRAY_SIZE);

    for (int i=0; i<ARRAY_SIZE; i++) {
        scanf("%d", &userNumbers[i]);
    }

    printf("Wprowadzone liczby:\n");
    for (int i=0; i<ARRAY_SIZE; i++) {
        printf("%d, ", userNumbers[i]);
    }
    printf("\n");

    srand(time(NULL));
    for (int i=0; i<ARRAY_SIZE; i++) {
        randomNumber = rand() % 49 + 1;
        for (int j=0; j<ARRAY_SIZE; j++) {
            if (randomNumbers[j] == 0) randomNumbers[i] = randomNumber;
            else if (randomNumbers[j] == randomNumber) randomNumber ++;
        }
    }
    printf("Wylosowane liczby:\n");
    for (int i=0; i<ARRAY_SIZE; i++) {
        printf("%d, ", randomNumbers[i]);
    }
    printf("\n");

    for (int i=0; i<ARRAY_SIZE; i++) {
        for (int j=0; j<ARRAY_SIZE; j++) {
            if (userNumbers[i] == randomNumbers[j]) {
                printf("%d == %d", userNumbers[i], randomNumbers[j]);
                score ++;
            }
        }
    }

    printf("Odgadniete liczby: %d", score);
    printf("\n");

    return 0;
}