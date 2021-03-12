#include <stdio.h>

int main() {
    int positive = 0, negative = 0, zeros = 0, input, n, tmp = 0;
    printf("Policz liczby\n-----------------\n");
    printf("Ile liczb chcesz podac? ");
    scanf("%d", &n);
    while (tmp < n) {
        printf("Wprowadz %d liczbe: ", tmp + 1);
        scanf("%d", &input);
        if (input < 0) 
            negative ++;
        else if (input > 0) 
            positive ++;
        else
            zeros ++;
        tmp ++;
    }
    printf("Podano:\n");
    printf(" - %d liczb dodatnich\n", positive);
    printf(" - %d liczb ujemnych\n", negative);
    printf(" - %d zer\n", zeros);

    return 0;
}