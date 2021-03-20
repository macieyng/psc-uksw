#include<stdio.h>
#include<stdlib.h>
 
int main() {
#pragma warning(disable:4996)
    //-----Zadanie 71-----
    printf("Zadanie71\n");
    printf("Program rysuje na ekranie gwiazdki ulozone w trojkat.\n\n");
    int kolumna, i, j;
    printf("Podaj ilosc kolumn: ");
    scanf("%d", &kolumna);
    for (i = 1; i <= kolumna; i++) {
        for (j = 1; j < kolumna - i; j++) {
            printf(" ");
        }
        for (j = 1; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Koniec programu.\n");
    system("pause");
    return 0;
}