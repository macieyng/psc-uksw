/*
    Napisz program kalkulator. Który umożliwi realizację operacji:
        – dodawania
        – odejmowania
        – mnożenia
        – dzielenia
        – potęgowania (wybierz zakres możliwych danych dla wykładnika i podstawy)
        – pierwiastkowania
    Program powinien weryfikować poprawność danych pod kątem logicznym(np. przy dzieleniu podano 0) 
    Program powinien na początku wyświetlić menu pozwalające na wybór operacji, 
    następnie pozwoli na podanie danych (1 liczbę w przypadku pierwiastkowania oraz 2 liczby w przypadku pozostałych danych)
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define EXIT 0
#define ADD 1
#define SUBTRACT 2
#define MULTIPLY 3
#define DIVIDE 4
#define POWER 5
#define ROOT 6
#define FACTORIAL 7


float add(float a, float b);
float divide(float a, float b);
float factorial(float a);
float multiply(float a, float b);
float power(float a, float b);
float root(float a, float b);
float subtract(float a, float b);

int getOperationChoice();

void displayMenu();
void getSingleNumber(float *a);
void getTwoNumbers(float *a, float *b);
void returnToMenu();


int main() {
    int operation = 0;
    float result = 0.0;
    float a, b;
    
    while(1) {
        displayMenu();
        operation = getOperationChoice();
        system("cls");

        if (operation == EXIT) break;

        if (operation == FACTORIAL) 
            getSingleNumber(&a);
        else 
            getTwoNumbers(&a, &b);

        switch (operation) {
            case ADD:
                result = add(a, b);
                break;
            case SUBTRACT:
                result = subtract(a, b);
                break;
            case MULTIPLY:
                result = multiply(a, b);
                break;
            case DIVIDE:
                result = divide(a, b);
                break;
            case POWER:
                result = power(a, b);
                break;
            case ROOT:
                result = root(a, b);
                break;
            case FACTORIAL:
                result = factorial(a);
                break;
            default:
                break;
        }
        if (operation == DIVIDE && result == 0.0) 
            returnToMenu();
        else {
            printf("Wynik: %f\n", result);
            returnToMenu();
        }  
    }
    return 0;
}


int getOperationChoice() {
    int choice = 0;
    while(1) {
        printf("Wybor: ");
        scanf("%d", &choice);
        if (choice >= EXIT && choice <= FACTORIAL) {
            return choice;
        } else {
            printf("Wybor nie zostal rozpoznany. Ponow wybor.\n");
        }
    }
}


float add(float a, float b) {
    printf("Dodawanie\n-----------------\n");
    return a + b;
}


float divide(float a, float b) {
    printf("Dzielenie\n-----------------\n");
    
    if (b == 0.0) {
        printf("Operacja niedozwolona.\n");
        return 0.0;
    } 
    return a / b;
}


void displayMenu() {
    system("cls");
    printf("Kalkulator\n-----------------\n");
    printf("Mozliwe operacje\n");
    printf("1 - dodawanie\n");
    printf("2 - odejmowanie\n");
    printf("3 - mnozenie\n");
    printf("4 - dzielenie\n");
    printf("5 - potegowanie\n");
    printf("6 - pierwiastkowanie\n");
    printf("7 - silnia\n");
    printf("0 - zakoncz\n");
}


float factorial(float a) {
    if (a <= 0.0) return 1.0;
    return factorial(a-1.0) * a;
}


void getSingleNumber(float *a) {
    printf("Liczba: ");
    scanf("%f", &*a);
}


void getTwoNumbers(float *a, float *b) {
    printf("Liczba 1: ");
    scanf("%f", &*a);
    printf("Liczba 2: ");
    scanf("%f", &*b);
}


float multiply(float a, float b) {
    printf("Mnozenie\n-----------------\n");
    return a * b;
}


float power(float a, float b) {
    printf("Potegowanie\n-----------------\n");
    return pow(a, b);
}


void returnToMenu() {
    printf("Nacisnij dowolny klawisz aby wrocic do menu...");
    getchar();
    getchar();
}


float root(float a, float b) {
    printf("Pierwiastkowanie\n-----------------\n");
    return pow(a, 1.0/b);
}


float subtract(float a, float b) {
    printf("Odejmowanie\n-----------------\n");
    return a - b;
}
