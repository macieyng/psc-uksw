#include <stdio.h>

#define NUMBERS_CNT 10

int main() {
    int numbers[NUMBERS_CNT] = {0};

    printf("Wprowadz 10 liczb calkowitych\n");
    for (int i=0; i< NUMBERS_CNT; i++) {
        printf("Liczba %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    printf("\n");
    
    printf("Wprowadzone liczby w odwrotnej kolejnosci:\n");
    for (int i=NUMBERS_CNT-1; i>=0 ; i--) {
        printf("%d, ", numbers[i]);
    }

    return 0;
}