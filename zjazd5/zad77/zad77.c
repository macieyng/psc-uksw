#include <stdio.h>
#include <math.h>

int main() {
    int h, d, u;
    int sum;
    for (int i=100; i<1000; i++) {
        u = i % 10;
        d = i / 10 % 10;
        h = i / 100 % 10;
        sum = pow(u, 3) + pow(d, 3) + pow(h, 3);
        if (sum == i) printf("Znaleziono! Liczba %d\n", i); 
    }

    return 0;
}