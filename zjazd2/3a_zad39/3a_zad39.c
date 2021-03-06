#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Wprowadz liczbe zmiennoprzecinkowa: ");
    scanf("%f", &x);
    switch(isgreater(x, 0.0)) {
        case 0:
            printf("Wartosc funkcji to -1");
            break;
        case 1:
            printf("Wartosc funkcji to %f", pow(2, x));
            break;
    }
    return 0;
}