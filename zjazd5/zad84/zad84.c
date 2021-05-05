#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ARRAY_SIZE 100

int main() {
    int numbers[ARRAY_SIZE] = {0};
    int numbersCnt = 0;
    int havePair = 0;
    printf("Ile liczb chcesz wprowadzc?\n");
    scanf("%d", &numbersCnt);
    if (numbersCnt > ARRAY_SIZE && numbersCnt < 2) return 1;

    printf("Wprowadz %d liczb\n", numbersCnt);

    for (int i=0; i<numbersCnt; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i=0; i<numbersCnt; i++) {
        for (int j=i+1; j<numbersCnt; j++) {
            if (numbers[i] == numbers[j]) {
                havePair = 1;
                break;
            }
        }
        if (havePair) break;
    }

    if (havePair) 
        printf("Jest para jednakowych liczb.\n");
    else 
        printf("Nie ma paray jednakowych liczb.\n");


    return 0;
}