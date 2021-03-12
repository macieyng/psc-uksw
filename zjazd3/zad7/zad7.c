#include <stdio.h>

int main() {
    int a = 0, b = 1, n, tmp = 0;
    
    printf("Liczby Fibonacciego\n-----------------\n");
    printf("Ile liczb chcesz wyswietlic? ");
    scanf("%d", &n);
    while (tmp < n) {
        if (tmp == 0) printf("%d ", a);
        else if (tmp == 1) printf("%d ", b);
        else {
            b = a + b;
            a = b - a;
            printf("%d ", b);
        }
        tmp ++;
    }
    return 0;
}