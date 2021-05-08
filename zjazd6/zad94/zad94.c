#include <stdio.h>


int main() {
    int n = 0, number = 0;
    int array[100][100];
    int badNumber = 0;
    printf("Podaj liczbe kolumn i wierszy (macierz kwadratowa): \n");
    scanf("%d", &n);

     for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &number);
            array[i][j] = number;
        }
        printf("\n");
    }

     for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            if(array[i][j] != 0) {
                badNumber = 1;
                break;
            };
        }
        if (badNumber) break;
        printf("\n");
    }

    if (badNumber) printf("Nie wszystkie elementy tabeli o n wierszach i n kolumnach lezace ponizej glownej przekatnej sa zerami.\n");
    else printf("Wszystkie elementy tabeli o n wierszach i n kolumnach lezace ponizej glownej przekatnej sa zerami.\n");

    return 0;
}