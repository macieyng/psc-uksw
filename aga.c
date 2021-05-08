#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)
 
 
int main() {
    //-------Zadanie88-------
    printf("Zadanie88\n");
    printf("Program dla zadanej przez uzytkownika tabeli o m wierszach i n kolumnach, wypisuje tabele z zamienionymi wierszami i kolumnami.\n\n");
    int m, n, i, j, tab[100][100];;
    srand(time(NULL));
    printf("Podaj liczbe wierszy: ");
    scanf("%d", &m);
    printf("Podaj liczbe kolumn: ");
    scanf("%d", &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            tab[i][j] = rand() % 20;
        }
    }
    printf("\n");
    printf("Twoja tabela przed zamiana: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Twoja tabela po zamianie: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", tab[j][i]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Koniec programu.\n");
 
   
    system("pause");
    return 0;
}