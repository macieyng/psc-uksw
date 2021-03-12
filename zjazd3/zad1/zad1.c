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
#include <ctype.h>

#define EXIT 0
#define ADD 1
#define SUBTRACT 2
#define MULTIPLY 3
#define DIVIDE 4
#define POWER 5
#define ROOT 6
#define DEEGRE_TO_RADIANS 7

#define OPTIONS 7

#define PI 3.1415926535

int getOperationChoice();

void add();
void divide();
void displayMenu();
void getTwoNumbers(float *a, float *b);
void multiply();
void power();
void returnToMenu();
void root();
void subtract();
void deegreeToRadians();


int main() {
    int operation;
    
    while(1) {
        displayMenu();
        operation = getOperationChoice();
        system("cls");
        switch (operation) {
            case ADD:
                add();
                break;
            case SUBTRACT:
                subtract();
                break;
            case MULTIPLY:
                multiply();
                break;
            case DIVIDE:
                divide();
                break;
            case POWER:
                power();
                break;
            case ROOT:
                root();
                break;
            case DEEGRE_TO_RADIANS:
                deegreeToRadians();
                break;
            case EXIT:
                return 0;
            default:
                break;
        }
    }
    return 0;
}


int getOperationChoice() {
    int choice = 0;
    while(1) {
        printf("Wybor: ");
        scanf("%d", &choice);
        if (choice >= EXIT && choice <= OPTIONS) {
            return choice;
        } else {
            printf("Wybor nie zostal rozpoznany. Ponow wybor.\n");
        }
    }
}


void add() {
    float a, b;
    printf("Dodawanie\n-----------------\n");
    getTwoNumbers(&a, &b);
    printf("Wynik: %f\n", a+b);
    returnToMenu();
}


void divide() {
    float a, b;
    printf("Dzielenie\n-----------------\n");
    getTwoNumbers(&a, &b);
    if (b == 0.0) {
        printf("Operacja niedozwolona.\n");
    } else {
        printf("Wynik: %f\n", a/b);
    }
    returnToMenu();
}

void deegreeToRadians() {
    float angle, radians;
    printf("Stopnie na radiany\n-----------------\n");
    printf("Podaj kat w stopniach: ");
    scanf("%f", &angle);
    radians = angle * PI / 180.0;
    printf("Liczba radianow: %f\n", radians);
    returnToMenu();
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
    printf("7 - stopnie na radiany\n");
    printf("0 - zakoncz\n");
}


void getTwoNumbers(float *a, float *b) {
    int correct;
    do {
        printf("Liczba 1: ");
        correct = scanf("%f", &*a);
        fflush(stdin);
    } while (!correct);
    do {
        printf("Liczba 2: ");
        correct = scanf("%f", &*b);
        fflush(stdin);
    } while (!correct);
}


void multiply() {
    float a, b;
    printf("Mnozenie\n-----------------\n");
    getTwoNumbers(&a, &b);
    printf("Wynik: %f\n", a*b);
    returnToMenu();
}


void power() {
    float a, b;
    printf("Potegowanie\n-----------------\n");
    getTwoNumbers(&a, &b);
    printf("Wynik: %f\n", pow(a, b));
    returnToMenu();
}


void returnToMenu() {
    system("pause");
}


void root() {
    float a, b;
    printf("Pierwiastkowanie\n-----------------\n");
    getTwoNumbers(&a, &b);
    printf("Wynik: %f\n", pow(a, 1.0/b));
    returnToMenu();
}


void subtract() {
    float a, b;
    printf("Odejmowanie\n-----------------\n");
    getTwoNumbers(&a, &b);
    printf("Wynik: %f\n", a-b);
    returnToMenu();
}
