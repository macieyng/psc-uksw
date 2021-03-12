#include <stdio.h>

int main() {
    int greatest, input, n, tmp = 0;
    printf("Znajdz najwieksza liczbe\n-----------------\n");
    printf("Ile liczb chcesz podac? ");
    scanf("%d", &n);
    while (tmp < n) {
        printf("Wprowadz %d liczbe: ", tmp + 1);
        scanf("%d", &input);
        if (tmp == 0) 
            greatest = input;
        else if (input > greatest) 
            greatest = input;
        tmp ++;
    }
    printf("Najwieksza liczba z podanych to %d", greatest);

    return 0;
}