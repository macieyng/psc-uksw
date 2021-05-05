#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ARRAY_SIZE 100

unsigned long long binominalCoeficcient(int n, int k);

int main() {
    int n = 0, k = 0;
    unsigned long long result = 1;
    printf("Wprowadz wartosc n:\n");
    scanf("%d", &n);
    printf("Wprowadz wartosc k:\n");
    scanf("%d", &k);

    result = binominalCoeficcient(n, k);
    printf("Wynik dla n=%d oraz k=%d: %llu\n", n, k, result);

    printf("Trojkat Pascala:\n");
    for (int i=0; i<=30; i ++) {
        for (int j=0; j<=i; j++) {
            result = binominalCoeficcient(i, j);
            if (result > 9999) printf("  ...");
            else printf("%5llu", result);
        }
        printf("\n");
    }

    return 0;
}

unsigned long long binominalCoeficcient(int n, int k) {
    unsigned long long result = 1;
    long double coeficcient = 0.0;
    for (int i=1; i<=(n-k); i++) {
        coeficcient = (long double)i + (long double)k;
        result *= coeficcient / i;
    }
    return result;
}