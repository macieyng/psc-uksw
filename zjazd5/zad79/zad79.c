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

    int idxBottom = 0, idx = 0, idxSmallest = 0;
    int smallest = numbers[0];
    int temp = 0;
    
    while (idxBottom != ARRAY_SIZE) {
        if (numbers[idx] < smallest) {
            smallest = numbers[idx];
            idxSmallest = idx;
        }
        idx ++;
        if (idx == ARRAY_SIZE) {
            temp = numbers[idxBottom];
            numbers[idxBottom] = smallest;
            numbers[idxSmallest] = temp;
            idxBottom ++;
            idxSmallest = idxBottom;
            smallest = numbers[idxSmallest];
            idx = idxBottom;
        }
    }

    printf("Wprowadzone liczby w kolejnosci od najmniejszej do najwiekszej:\n");
    for (int i=0; i<ARRAY_SIZE; i++) {
        printf("%d, ", numbers[i]);
    }

    return 0;
}