#include <stdio.h>
#include <math.h>

int main() {
    double x, y, r1, r2;
    printf("Wprowadz wartosc x:");
    scanf("%lf", &x);
    printf("Wprowadz wartosc y:");
    scanf("%lf", &y);
    r1 = sqrt( pow(x, 2) + pow(y, 2));
    if (x == 0.0) {
        r2 = abs(y);
    } else if ((abs(x) >= abs(y)) && x != 0) {
        r2 = abs(x) * sqrt(1 + pow( (y / x), 2));
    } else {
        r2 = abs(y) * sqrt(1 + pow( (x / y), 2));
    }

    if (r1 == r2) {
        printf("OBA ALGORYTMY DAJA TEN SAM WYNIK.\n");
        printf("Odleglosc punktu (%.17g, %.17g) od (0,0) wynosi %.17g.\n", x, y, r1);
    } else {
        printf("ALGORYTMY DAJA ROZNE WYNIKI.\n");
        printf("Odleglosc punktu (%.17g, %.17g) od (0,0) wynosi:\n", x, y);
        printf(" -wg \"klasycznego\" algorytmu %.17g\n", r1);
        printf(" -wg \"specjalnego\" algorytmu %.17g\n", r2);
        printf("Wartosc bezwzgledna roznicy miedzy wynikami:\n");
        // double diff = r1 - r2;
        printf("\t%.17g\n", fabs(r1 - r2));
    }

    return 0;
}