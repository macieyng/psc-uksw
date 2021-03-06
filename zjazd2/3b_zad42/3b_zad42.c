#include <stdio.h>
#include <math.h>

int main() {
    int choice1, choice2;
    double side1, side2, side3, angle, height, area;
    printf("Policzmy pole trojkata\n-----------------\n");
    printf("Wybierz metode obliczenia pola trojkata:\n");
    printf("1. bok i spuszczona nan wysokosc\n");
    printf("2. dwa boki i kat miedzy nimi\n");
    printf("3. trzy boki\n");
    scanf("%d", &choice1);
    switch(choice1) {
        case 1:
            printf("Podaj bok trojkata: ");
            scanf("%lf", &side1);
            printf("Podaj wysokosc trojkata: ");
            scanf("%lf", &height);
            area = side1 * height / 2;
            break;
        case 2:
            printf("Podaj pierwszy bok: ");
            scanf("%lf", &side1);
            printf("Podaj drugi bok: ");
            scanf("%lf", &side2);
            printf("Kat w stopniach (1) czy w radianch (2)? ");
            scanf("%d", &choice2);
            printf("Podaj kat miedzy bokiem pierwszym i drugim: ");
            scanf("%lf", &angle);
            if (choice2 == 1) angle = angle * 3.1417 / 180.0;
            area = side1 * side2 * sin(angle) / 2;
            break;
        case 3:
            printf("Podaj pierwszy bok: ");
            scanf("%lf", &side1);
            printf("Podaj drugi bok: ");
            scanf("%lf", &side2);
            printf("Podaj trzeci bok: ");
            scanf("%lf", &side3);
            area = sqrt((side1 + side2 + side3)*(side1 + side2 - side3)*(side1 - side2 + side3)*(- side1 + side2 + side3)) / 4;         
            break;
    }

    printf("Pole trojkat wynosi: %lf", area);


    return 0;
}