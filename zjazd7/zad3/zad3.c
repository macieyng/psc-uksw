#include <stdio.h>

int fibonacci(int n);

int main() {
    int n = 0;

    printf("Ktory element ciagu Fibonacciego chcesz wypisac? ");
    scanf("%d", &n);
    
    printf("Oto %d element ciagu Fibonacciego: %d", n, fibonacci(n));

    return 0;
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-2) + fibonacci(n-1);
}