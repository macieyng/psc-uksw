#include <stdio.h>

int main() {
    int m, n;
    int array[100][100] = {0};
    printf("Podaj liczbe wierszy: \n");
    scanf("%d", &m);
    printf("Podaj liczbe kolumn: \n");
    scanf("%d", &n);
   
    int number = 0;
    int sumRow = 0, sumColumn = 0;
    int badRow = 0, badColumn = 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            while(1) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &number);
                array[i][j] = number;
                if (array[i][j] < 0 || array[i][j] > 1) 
                    printf("Nie poprawna liczba. Wprowadz jeszcze raz.\n");
                else break;
            }
        }
        printf("\n");
    }

    printf("Wprowadzona tablica:\n");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("%2d", array[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            sumRow += array[i][j];
        }
        if (sumRow != i + 1) {
            badRow = 1; 
            break;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            sumColumn += array[j][i];
        }
        if (sumColumn != i + 1) {
            badColumn = 1; 
            break;
        }
    }

    if (!badColumn) printf("W kazdej kolumnie stoi dokladnie jedna 1.\n");
    else printf("W ktorejs kolumnie nie stoi dokladnie jedna 1.\n");
    if (!badRow) printf("W kazdym wierszu stoi dokladnie jedna 1.\n");
    else printf("W ktoryms wierszu nie stoi dokladnie jedna 1.\n");


    return 0;
}