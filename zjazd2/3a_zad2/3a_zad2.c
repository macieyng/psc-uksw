// Napisz program, który wypiszę rok używając rzymskich cyfr. Użytkownik podaje rok cyframi arabskimi całkowitymi.
// Program ma działać dla lat -2999 do + 2999.

// M - 1000, D - 500, C - 100, L - 50, X - 10, V - 5, I - 1

#include <stdio.h>
#include <stdlib.h>

int main() {
    int year, m, d, c, l, x, v, i;
    char* romanYear;

    printf("Rok w cyfrach rzymskich\n----------------\n");

    printf("Wprowadz rok w zapisie dziesietnym: ");
    scanf("%d", &year);

    if (year > 2999 || year < -2999) {
        printf("Podany rok jest poza zasiegiem.");
        return 0;
    }

    if (year < 0) {
        year *= -1;
        printf("-");
    }

    m = year / 1000;
    year = year % 1000;
    d =  year / 500;
    year = year % 500;
    c =  year / 100;
    year = year % 100;
    l =  year / 50;
    year = year % 50;
    x =  year / 10;
    year = year % 10;
    v =  year / 5;
    year = year % 5;
    i =  year / 1;
    year = year % 1;

    // thousends
    switch(m) {
        case 3:
            printf("M");
        case 2:
            printf("M");
        case 1:
            printf("M");
    }

    // hundreds
    if (c + d*5 == 9) printf("CM");
    else {
        if (d) printf("D");

        switch(c) {
            case 4:
                printf("CD");
                break;
            case 3:
                printf("C");
            case 2:
                printf("C");
            case 1:
                printf("C");
        }
    }

    // tens
    if (x + l*5 == 9) printf("XC");
    else {
        if (l) printf("L");

        switch(x) {
            case 4:
                printf("XL");
                break;
            case 3:
                printf("X");
            case 2:
                printf("X");
            case 1:
                printf("X");
        }
    }

    
    if (i + v*5 == 9) printf("IX");
    else {
        if (v) printf("V");

        switch(i) {
            case 4:
                printf("IV");
                break;
            case 3:
                printf("I");
            case 2:
                printf("I");
            case 1:
                printf("I");
        }
    }    

    return 0;
}