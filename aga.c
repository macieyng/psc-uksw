#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

int main() {
    srand(time(NULL));
    int i, j, k, traf_dwa = 0, traf_trzy = 0, traf_cztery = 0, traf_piec = 0, traf_szesc = 0, trafienia = 0;
    int traf[7] = {0};
    int losowania[12][6] = { 0 }, liczba, los[6] = { 0 }, user[6] = { 0 };
    int losowana = 0;

    // for (i = 0; i < 12; i++) {
    //     for (j = 0; j < 6; j++) {
    //         losowania[i][j] = rand() % 49 + 1;
    //     }
    // }

    int punkcik = 0;

    for (int k=0; k<12; k++) {
        for (int i=0; i<6; i++) { // [ 1, 2, 0_, 0, 0, 0]
            while(punkcik < 6) {
                punkcik = 0;
                losowana = rand() % 49 + 1; // 1 2
                for (int j=0; j<6; j++) 
                    if (losowania[k][j] != losowana) punkcik ++;
                if (punkcik == 6) losowania[k][i] = losowana;
            }
            punkcik = 0;
        }
    }
    
    // 1. Wylosuj liczbe i zapisz do zmiennej
    // 2. Sprawdź czy wylosowana liczba już nie wystepuje
    // Hint: jeśli dana liczba nie występuje to daj jej punkcik, jak zbierze 6 to można ją wpisać do tablicy
    // 3. Jeśli występuje idź do 1
    // 4. Jeśli występuje wpisz do tablicy i losuj następną
    
    for (i = 0; i < 6; i++) {
        printf("Podaj %d swoja liczbe z zakresu 1-49: ", i + 1);
        while (1) {
            scanf("%d", &liczba);
            fflush(stdin);
            if (liczba > 49) {
                printf("Podana liczba jest niepoprawna. Wprowadz jeszcze raz: ");
            }
            else {
                user[i] = liczba;
                break;
            }
        }
    }
    printf("\n");
    printf("Twoje liczby to: ");
    for (i = 0; i < 6; i++) {
        if (i == 5) {
            printf("%d", user[i]);
        }
        else {
            printf("%d, ", user[i]);
        }
    }
    printf("\n\n");
    for (i = 0; i < 12; i++) {
        printf("Liczby z losowania numer %d: ", i + 1);
        for (j = 0; j < 6; j++) {
            if (j == 5) {
                printf("%d", losowania[i][j]);
            }
            else {
                printf("%d, ", losowania[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 12; i++) {

        trafienia = 0;
        for (j = 0; j < 6; j++) {
            for (k = 0; k < 6; k++) {
                if (user[k] == losowania[i][j]) {
                    trafienia++;
                }
            }
        }
        traf[trafienia] ++;

        // switch (trafienia) {
        // case 2:
        //     traf_dwa++;
        //     break;
        // case 3:
        //     traf_trzy++;
        //     break;
        // case 4:
        //     traf_cztery++;
        //     break;
        // case 5:
        //     traf_piec++;
        //     break;
        // case 6:
        //     traf_szesc++;
        //     break;
        // default:
        //     break;
        // }
    }
    printf("Podczas ostatnich 12 losowan trafiono %d dwojek.\n", traf_dwa);
    printf("Podczas ostatnich 12 losowan trafiono %d trojek.\n", traf_trzy);
    printf("Podczas ostatnich 12 losowan trafiono %d czworek.\n", traf_cztery);
    printf("Podczas ostatnich 12 losowan trafiono %d piatek.\n", traf_piec);
    printf("Podczas ostatnich 12 losowan trafiono %d szostek.\n", traf_szesc);
    system("pause");
    return 0;
}