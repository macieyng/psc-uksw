#include <stdio.h>

int main() {
    int input, n, tmp = 0;
    float sum = 0;
    printf("Policz liczby\n-----------------\n");
    printf("Ile liczb chcesz podac? ");
    scanf("%d", &n);
    while (tmp < n) {
        printf("Wprowadz %d liczbe: ", tmp + 1);
        scanf("%d", &input);
        sum += input;
        tmp ++;
    }
    printf("Srednia podanych liczb to %f", sum / n);

    return 0;
}