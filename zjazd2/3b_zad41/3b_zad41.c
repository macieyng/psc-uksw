#include <stdio.h>
#include <math.h>

int main() {
    float v1a, v1b, v2a, v2b;
    
    printf("Wprowadz wspolrzedne wektora v1.\n");
    printf("v1 a: ");
    scanf("%f", &v1a);
    printf("v1 b: ");
    scanf("%f", &v1b);

    printf("Wprowadz wspolrzedne wektora v2.\n");
    printf("v2 a: ");
    scanf("%f", &v2a);
    printf("v2 b: ");
    scanf("%f", &v2b);

    if ((v1a == 0 && v1b == 0) || (v2a == 0 && v2b == 0)) {
        printf("jeden z wektorow jest zerowy");
    } else if (v1a*v2a + v1b*v2b == 0.0) {
        printf("wektory sa prostopadle");
    } else if (v1a/v2a == v1b/v2b && v2a != 0 && v2b != 0) {
        printf("wektory sa rownolegle");
    } else if (v2a/v1a == v2b/v1b && v1a != 0 && v1b != 0) {
        printf("wektory sa rownolegle");
    } else {
        printf("wektory nie sa ani prostopadle, ani rownolegle");
    }

    return 0;
}