#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100

#define EXIT 0
#define DRAW 1
#define INSERT 2
#define BIGGEST 3
#define LOWEST 4
#define HARMONIC_AVG 5
#define BUBBLE_SORT 6
#define SELECTION_SORT 7
#define SHOW_ARRAY 8

#define NUMBER_OF_OPTIONS 8

#define BIGGEST_FIRST 1
#define NOT_SORTED 0
#define LOWEST_FIRST -1

int operation = 0;
int arraySorted = NOT_SORTED;

float array[ARRAY_SIZE];

void displayMenu();
int getOperationChoice();
void printArray(float *array, int arraySize);
void insertNumbersIntoArray(float *array, int arraySize);
void drawArrayNumbers(float *array, int arraySize);
void showBiggest(float *array, int arraySize);
void showLowest(float *array, int arraySize);
void harmonicAverage(float *array, int arraySize);
void bubbleSort(float *array, int arraySize);
void selectionSort(float *array, int arraySize);
void returnToMenu();

int main() {
    while(1) {
        displayMenu();
        operation = getOperationChoice();
        if (operation == EXIT) break;
        switch(operation) {
            case INSERT:
                insertNumbersIntoArray(array, ARRAY_SIZE);
                break;
            case DRAW:
                drawArrayNumbers(array, ARRAY_SIZE);
                break;
            case BIGGEST:
                showBiggest(array, ARRAY_SIZE);
                break;
            case LOWEST:
                showLowest(array, ARRAY_SIZE);
                break;
            case HARMONIC_AVG:
                harmonicAverage(array, ARRAY_SIZE);
                break;
            case BUBBLE_SORT:
                bubbleSort(array, ARRAY_SIZE);
                break;
            case SELECTION_SORT:
                selectionSort(array, ARRAY_SIZE);
                break;
            case SHOW_ARRAY:
                printArray(array, ARRAY_SIZE);
                break;
            default:
                break;
        }
        returnToMenu();
    }
    return 0;
}

void displayMenu() {
    system("cls");
    printf("Program\n-----------------\n");
    printf("1 - wylosuj zawartosc tablicy\n");
    printf("2 - wprowadz zawartosc tablicy\n");
    printf("3 - wyswietl najwieksza\n");
    printf("4 - wyswietl najmniejsza\n");
    printf("5 - srednia harmoniczna\n");
    printf("6 - sortowanie babelkowe rosnaco\n");
    printf("7 - sortowanie przez wybieranie malejaco\n");
    printf("8 - pokaz tablice\n");
    printf("0 - zakoncz\n");
};

int getOperationChoice() {
    int choice = 0;
    while(1) {
        printf("Wybor: ");
        scanf("%d", &choice);
        if (choice >= EXIT && choice <= NUMBER_OF_OPTIONS) {
            return choice;
        } else {
            printf("Wybor nie zostal rozpoznany. Ponow wybor.\n");
        }
    }
}

void printArray(float *array, int arraySize) {
    for (int i=0; i<arraySize; i++) {
        printf("%6.2f", array[i]);
        if (!((i + 1) % 10)) printf("\n");
    }
    printf("\n");
}

void insertNumbersIntoArray(float *array, int arraySize) {
    for (int i=0; i<arraySize; i++) {
        printf("Element[%d]: ", i);
        scanf("%f", &array[i]);
    }
    arraySorted = NOT_SORTED;
    printf("Wprowadzona tablica:\n");
    printArray(array, arraySize);
}

void drawArrayNumbers(float *array, int arraySize) {
    srand(time(NULL));
    for (int i=0; i<arraySize; i++) {
        array[i] = (rand() % 10001) / 100.0;
    }
    arraySorted = NOT_SORTED;
    printf("Wylosowana tablica:\n");
    printArray(array, arraySize);
}

void showBiggest(float *array, int arraySize) {
    if (arraySorted == BIGGEST_FIRST) {
        printf("Najmniejsza liczba to %6.2f\n", array[0]);
    } 
    else if (arraySorted == LOWEST_FIRST) {
        printf("Najmniejsza liczba to %6.2f\n", array[arraySize-1]);
    }
    else {
        float biggest = array[0];
        for (int i=1; i<arraySize; i++) {
            if (array[i] > biggest) biggest = array[i];
        }
        printf("Najmniejsza liczba to %6.2f\n", biggest);
    }
}

void returnToMenu() {
    printf("Nacisnij dowolny klawisz aby wrocic do menu...");
    getchar();
    getchar();
}

void showLowest(float *array, int arraySize) {
    if (arraySorted == BIGGEST_FIRST) {
        printf("Najmniejsza liczba to %6.2f\n", array[arraySize-1]);
    } 
    else if (arraySorted == LOWEST_FIRST) {
        printf("Najmniejsza liczba to %6.2f\n", array[0]);
    }
    else {
        float lowest = array[0];
        for (int i=1; i<arraySize; i++) {
            if (array[i] < lowest) lowest = array[i];
        }
        printf("Najmniejsza liczba to %6.2f\n", lowest);
    }
}

void harmonicAverage(float *array, int arraySize) {
    float sum = 0.0;
    for(int i=0; i<arraySize; i++) {
        sum += 1.0 / array[i];
    }
    printf("Srednia harmoniczna wynosi: %6.2f\n", arraySize / sum);
}

void bubbleSort(float *array, int arraySize) {
    printf("Przed sortowaniem:\n");
    printArray(array, arraySize);
 
    int idx = 1, change = 0, numbersInCorrectOrder = 0;
    float temp = 0.0;
    
    while (1) {
        if (array[idx] < array[idx-1]) {
            temp = array[idx-1];
            array[idx-1] = array[idx];
            array[idx] = temp;
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

    printf("Po sortowaniu:\n");
    printArray(array, arraySize);
}


void selectionSort(float *array, int arraySize) {
    printf("Przed sortowaniem:\n");
    printArray(array, arraySize);
 
    float biggest, temp;
    int idxBiggest;
 
    for (int i=0; i<arraySize; i++) {
        biggest = array[i];
        idxBiggest = i;
        for (int j=i+1; j<arraySize; j++) {
            if (array[j] > biggest) {
                biggest = array[j];
                idxBiggest = j;
            }
        }
        temp = array[i];
        array[i] = array[idxBiggest];
        array[idxBiggest] = temp;
    }
    printf("Po sortowaniu:\n");
    printArray(array, arraySize);
}
