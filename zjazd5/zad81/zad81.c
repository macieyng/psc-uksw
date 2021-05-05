#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ARRAY_SIZE 10

int main() {
    int numbers[ARRAY_SIZE];
    
    srand(time(NULL));
    for (int i=0; i<ARRAY_SIZE; i++) {
        numbers[i] = rand() % 2 + 1;
    }

    int idx = 1;
    int smaller = numbers[0];
    int temp = 0, change = 0, numbersInCorrectOrder = 0;
    
    while (1) {
        if (numbers[idx] < numbers[idx-1]) {
            temp = numbers[idx-1];
            numbers[idx-1] = numbers[idx];
            numbers[idx] = temp;
            change = 1;
        }
        idx ++;
        if (idx == (ARRAY_SIZE - numbersInCorrectOrder)) {
            if (change == 0) break; 
            numbersInCorrectOrder ++;
            idx = 1;
            change = 0;
        }
        if ((ARRAY_SIZE - numbersInCorrectOrder) == 1) break;
    }

    for (int i=0; i<ARRAY_SIZE; i++) {
        printf("%d, ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}