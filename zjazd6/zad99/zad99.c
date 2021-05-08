#include <stdio.h>
#include <math.h>


int main() {
    int m = 0, n = 0, number = 0, colSum = 0, biggestSum = 0;
    int array[100][100] = {0};
    int colSumArray[100] = {0};
    printf("Podaj liczbe wierszy: \n");
    scanf("%d", &m);
    printf("Podaj liczbe kolumn: \n");
    scanf("%d", &n);

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &number);
            array[i][j] = number;
        }
        printf("\n");
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            colSum += abs(array[j][i]);
        }
        colSumArray[i] = colSum;
        colSum = 0;
    }

    biggestSum = colSumArray[0];
    for (int i=1; i<n; i++) {
        if (colSumArray[0] > biggestSum) biggestSum = colSumArray[i];
    }

    printf("Obliczona liczba wynosi: %d", biggestSum);

    return 0;
}