#include <stdio.h>
#include <stdlib.h>
#include <time.h>       /* time */

#define NUMBERS_TO_GUESS 6
#define NUMBER_OF_DRAWS 12

int main() {
    int userNumbers[NUMBERS_TO_GUESS] = {0};
    int drawnNumbers[NUMBER_OF_DRAWS][NUMBERS_TO_GUESS] = {0};
    int overallScore[NUMBERS_TO_GUESS + 1]= {0};
    int checks = 0;

    int randomNumber = 0, score = 0;
    printf("Wprowadz %d liczb z zakresu 1-49\n", NUMBERS_TO_GUESS);

    for (int i=0; i<NUMBERS_TO_GUESS; i++) {
        scanf("%d", &userNumbers[i]);
    }

    printf("Wprowadzone liczby:\n");
    for (int i=0; i<NUMBERS_TO_GUESS; i++) {
        printf("%2d, ", userNumbers[i]);
    }
    printf("\n");

    srand(time(NULL));
    for (int k=0; k<NUMBER_OF_DRAWS; k++) {
        for (int i=0; i<NUMBERS_TO_GUESS; i++) {
            checks = 0;
            while(checks < NUMBERS_TO_GUESS) {
                randomNumber = rand() % 49 + 1;
                for (int j=0; j<NUMBERS_TO_GUESS; j++)
                    if (drawnNumbers[k][j] != randomNumber) checks ++;
                if (checks == NUMBERS_TO_GUESS) drawnNumbers[k][i] = randomNumber;
                else checks = 0;
            }
        }
    }

    // printf("Wylosowane liczby:\n");
    // for (int k=0; k<NUMBER_OF_DRAWS; k++) {
    //     for (int i=0; i<NUMBERS_TO_GUESS; i++) {
    //         printf("%2d, ", drawnNumbers[k][i]);
    //     }
    //     printf("\n");
    // }

    for (int k=0; k<NUMBER_OF_DRAWS; k++) {
        for (int i=0; i<NUMBERS_TO_GUESS; i++) {
            for (int j=0; j<NUMBERS_TO_GUESS; j++) {
                if (userNumbers[i] == drawnNumbers[k][j]) {
                    score ++;
                }
            }
        }
        overallScore[score]++;
        score = 0;
    }

    printf("Odgadniete liczby:\n");
    printf("Pudlo:   %2d\n", overallScore[0]);
    printf("Jedynki: %2d\n", overallScore[1]);
    printf("Dwojki:  %2d\n", overallScore[2]);
    printf("Trojki:  %2d\n", overallScore[3]);
    printf("Czworki: %2d\n", overallScore[4]);
    printf("Piatki:  %2d\n", overallScore[5]);
    printf("Szostki: %2d\n", overallScore[6]);
    printf("\n");

    return 0;
}