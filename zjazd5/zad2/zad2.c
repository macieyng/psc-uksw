#include <stdio.h>

#define ARRAY_SIZE 10

int main() {
    int numbers[ARRAY_SIZE];
    printf("Wprowadz %d liczb\n", ARRAY_SIZE);

    for (int i=0; i<ARRAY_SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Wprowadzone liczby:\n");
    for (int i=0; i<ARRAY_SIZE; i++) {
        printf("%d, ", numbers[i]);
    }
    printf("\n");

    int idx = 1;
    int temp = 0;
    int score = 0;
    
    while (1) {
        if (numbers[idx-1] > numbers[idx]) {
            temp = numbers[idx-1];
            numbers[idx-1] = numbers[idx];
            numbers[idx] = temp;
        } else {
            score ++;
        }
        idx = (idx + 1) % ARRAY_SIZE;
        if (score == ARRAY_SIZE) break;
        if (idx == 0) score = 0;
    }

    printf("Wprowadzone liczby w kolejnosci od najmniejszej do najwiekszej:\n");
    for (int i=0; i<ARRAY_SIZE; i++) {
        printf("%d, ", numbers[i]);
    }

    return 0;
}