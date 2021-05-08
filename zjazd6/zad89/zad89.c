#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m, n;
    printf("Podaj liczbe wierszy: \n");
    scanf("%d", &m);
    printf("Podaj liczbe kolumn: \n");
    scanf("%d", &n);
    srand(time(NULL));
    int randomNumber = 0, sign = 0, biggestNumber = 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            randomNumber = rand() % 100;
            sign = rand() % 2;
            if (sign) randomNumber *= -1;
            printf("%4d", randomNumber);

            if (j==0 && i==0) biggestNumber = randomNumber;
            else if (randomNumber > biggestNumber) biggestNumber = randomNumber;
        }
        printf("\n");
    }

    printf("Najwieksza liczba w tablicy to %d", biggestNumber);

    return 0;
}