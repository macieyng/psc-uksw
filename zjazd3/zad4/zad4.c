#include <stdio.h>

int main() {
    int lowest, input, n, tmp = 0;
    printf("Znajdz najmniejsza liczbe\n-----------------\n");
    printf("Ile liczb chcesz podac? ");
    scanf("%d", &n);
    while (tmp < n) {
        printf("Wprowadz %d liczbe: ", tmp + 1);
        scanf("%d", &input);
        if (tmp == 0) 
            lowest = input;
        else if (input < lowest) 
            lowest = input;
        tmp ++;
    }
    printf("Najmnijesza liczba z podanych to %d", lowest);

    return 0;
}