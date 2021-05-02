#include <stdio.h>

#define ARRAY_SOLUTION 0

int main() {
    int numbers[100] = {0};
    int numberCnt = 0;
    int sum = 0;
    int multi = 1;

    printf("Ile liczb chcesz podac? ");
    scanf("%d", &numberCnt);
    
    if (ARRAY_SOLUTION) {
        printf("Metoda z tablica\n");
        for (int i=0; i<numberCnt; i++) {
            scanf("%d", &numbers[i]);
        }

        for (int i=0; i<numberCnt; i++) {
            if (numbers[i] == 0) continue;
            sum += numbers[i];
            multi *= numbers[i];
        }
    } else {
        printf("Metoda bez tablicy\n");

        for (int i=0; i<numberCnt; i++) {
            int number = 0;
            scanf("%d", &number);
            if (number == 0) continue;
            sum += number;
            multi *= number;
        }
    }

    printf("Suma elementow: %d\n", sum);
    printf("Iloczyn elementow niezerowych: %d\n", multi);


    return 0;
}