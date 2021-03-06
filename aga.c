#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void) {
    //--------Zadanie 3--------
    printf("Zadanie3\n");
    printf("Witamy w grze Milionerzy!\nPrzed Toba 12 pytan w grze o milion zlotych. Powodzenia!\n");
    // char odp1, odp2, odp3, odp4, odp5, odp6, odp7, odp8, odp9, odp10, odp11, odp12;
    char wybor;
    // char podp1;
    // char podp2;
    // char podp3;
    // char podp4;
    // char podp5;
    // char podp6;
    // char podp7; 
    // char podp8;
    // char podp9;
    // char podp10;
    // char podp11;
    // char podp12;
    printf("Z kazda poprawna odpowiedzia Twoja wygrana wzrasta i przybliza Cie do wygrania miliona.\n");
    printf("Grasz o kwote 500zl.\n");
    printf("pytanie1\n");
    printf("A.odpowiedz\n");    // poprawna
    printf("B.odpowiedz\n");
    printf("C.odpowiedz\n");
    printf("D.odpowiedz\n");
    printf("Podaj swoja odpowiedz: ");
    // scanf("%c", &odp1);
    scanf("%c", &wybor);
    printf("%c", wybor);
    if (&wybor == "A") {
        printf("Twoja odpowiedz jest prawidlowa. Wygrales 500zl!\n");
        printf("Mozesz grac o kwote gwarantowana 1000zl. Zdecyduj co robisz.\n");
        printf("1.Gram dalej.\n");
        printf("2.Rezygnuje i koncze gre z kwota 500zl na koncie.\n");
        // int wybor1;
        // scanf("%d", &wybor1);
        scanf("%d", &wybor);
        // switch (wybor1) {
        //     case 1:
        //         printf("Grasz o kwote gwarantowana 1000zl.\n");
        //         printf("pytanie2\n");
        //         printf("A.odpowiedz\n");
        //         printf("B.odpowiedz\n");
        //         printf("C.odpowiedz\n");
        //         printf("D.odpowiedz\n");
        //         printf("Podaj swoja odpowiedz: ");
        //         scanf("%c", &odp2);
        //         if (toupper(odp2) == toupper(podp2)) {
        //             printf("Twoja odpowiedz jest prawidlowa. Wygrales kwote gwarantowana 1000zl!\n");
        //             printf("Mozesz grac o kwote 2000zl. Zdecyduj co robisz.\n");
        //             printf("1.Gram dalej.\n");
        //             printf("2.Rezygnuje i koncze gre z kwota 1000zl na koncie.\n");
                    
        //     case 2:
        //         printf("Dziekujemy za gre. Twoja wygrana to 500zl.");
        //         break;
        //     }

        // Jeśli kończy to kończymy program, w przeciwnym razie idziemy dalej
        if(wybor == 2) {
            printf("Dziekujemy za gre. Twoja wygrana to 500zl.");
            system("pause");
            return 0;      
        }
    } else {
        printf("Niestety, Twoja odpowiedz jest nieprawidlowa. Niestety to koniec Twojej gry!");
        // Przegrał, kończymy program.
        system("pause");
        return 0;
    }

    printf("Grasz o kwote 1000zl.\n");
    printf("pytanie2\n");
    printf("A.odpowiedz\n");    // poprawna
    printf("B.odpowiedz\n");
    printf("C.odpowiedz\n");
    printf("D.odpowiedz\n");
    printf("Podaj swoja odpowiedz: ");
    scanf("%c", &wybor);
    wybor = toupper(wybor);
    if (&wybor == "A") {
        printf("Twoja odpowiedz jest prawidlowa. Wygrales 500zl!\n");
        printf("Mozesz grac o kwote gwarantowana 1000zl. Zdecyduj co robisz.\n");
        printf("1.Gram dalej.\n");
        printf("2.Rezygnuje i koncze gre z kwota 1000zl na koncie.\n");
        scanf("%d", &wybor);
        if(wybor == 2) {
            printf("Dziekujemy za gre. Twoja wygrana to 1000zl.");
            system("pause");
            return 0;      
        }
    } else {
        printf("Niestety, Twoja odpowiedz jest nieprawidlowa. Niestety to koniec Twojej gry!");
        system("pause");
        return 0;
    }

    system("pause");
    return 0;
}