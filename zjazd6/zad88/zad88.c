#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m, n;
    printf("Podaj liczbe wierszy: \n");
    scanf("%d", &m);
    printf("Podaj liczbe kolumn: \n");
    scanf("%d", &n);

    int array[100][100] = {0}, tmpArray[100][100] = {0};
    srand(time(NULL));
    int randomNumber = 0, sign = 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            randomNumber = rand() % 100;
            sign = rand() % 2;
            if (sign) randomNumber *= -1;
            array[i][j] = randomNumber;
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            tmpArray[j][i] = array[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            array[i][j] = tmpArray[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}