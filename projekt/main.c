#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int id;
    char initials[2];
    int indexNumber;
    int points;
    int absence;
    float grade;
    float score;
} Student;

Student listOfStudents[MAX_STUDENTS];
int numberOfStudents = 0;
int maxPoints = 0;


int displayMainMenu() {
    system("cls");
    printf("Dziennik CLI (studentow: %d)\n---------------\n", numberOfStudents);
    printf("1) Dodaj studentow\n");
    printf("2) Wyswietl liste studentow\n");
    printf("3) Wystaw oceny\n");
    printf("0) Zakoncz program\n");
}

int getOption() {
    int option;
    scanf("%d", &option);
    fflush(stdin);
    return option;
}

void createStudent() {
    if (numberOfStudents == MAX_STUDENTS) return;

    system("cls");
    printf("Wprowadzanie danych studenta\n--------------\n");

    Student student = listOfStudents[numberOfStudents];
    student.id = numberOfStudents + 1;
    student.grade = 0.0;
    student.score = 0.0;
    
    printf("Inicjaly: ");
    gets(student.initials);
    fflush(stdin);

    printf("Numer indeksu: ");
    scanf("%d", &student.indexNumber);
    fflush(stdin);

    printf("Punkty: ");
    scanf("%d", &student.points);
    fflush(stdin);

    printf("Nieobecnosci: ");
    scanf("%d", &student.absence);
    fflush(stdin);

    listOfStudents[numberOfStudents] = student;
    numberOfStudents ++;
}

void sortStudentsByAbsence() {
    int idx = 1;
    Student temp;
    int change = 0, inCorrectOrder = 0;
    
    while (1) {
        if (listOfStudents[idx].absence < listOfStudents[idx-1].absence) {
            temp = listOfStudents[idx-1];
            listOfStudents[idx-1] = listOfStudents[idx];
            listOfStudents[idx] = temp;
            change = 1;
        }
        idx ++;
        if (idx == (numberOfStudents - inCorrectOrder)) {
            if (change == 0) break; 
            inCorrectOrder ++;
            idx = 1;
            change = 0;
        }
        if ((numberOfStudents - inCorrectOrder) == 1) break;
    }
}

void sortStudentsByPoints() {
    int idx = 1;
    Student temp;
    int change = 0, inCorrectOrder = 0;
    
    while (1) {
        if (listOfStudents[idx].points > listOfStudents[idx-1].points) {
            temp = listOfStudents[idx-1];
            listOfStudents[idx-1] = listOfStudents[idx];
            listOfStudents[idx] = temp;
            change = 1;
        }
        idx ++;
        if (idx == (numberOfStudents - inCorrectOrder)) {
            if (change == 0) break; 
            inCorrectOrder ++;
            idx = 1;
            change = 0;
        }
        if ((numberOfStudents - inCorrectOrder) == 1) break;
    }
}

void sortStudentsByIndexNumber() {
    int idx = 1;
    Student temp;
    int change = 0, inCorrectOrder = 0;
    
    while (1) {
        if (listOfStudents[idx].indexNumber < listOfStudents[idx-1].indexNumber) {
            temp = listOfStudents[idx-1];
            listOfStudents[idx-1] = listOfStudents[idx];
            listOfStudents[idx] = temp;
            change = 1;
        }
        idx ++;
        if (idx == (numberOfStudents - inCorrectOrder)) {
            if (change == 0) break; 
            inCorrectOrder ++;
            idx = 1;
            change = 0;
        }
        if ((numberOfStudents - inCorrectOrder) == 1) break;
    }
}

int getStudentIndexFromId(int id) {
    int indexNumber = 0;
    for (int i=0; i<MAX_STUDENTS; i++) {
        if (listOfStudents[i].id == id) return i;
    }
    printf("Nie znaleziono studenta o id=%d.\n", id);
    return -1;
}

int yesNoInput() {
    int input = 0;
    printf("1) Tak\n2) Nie\n");
    scanf("%d", &input);
    fflush(stdin);
    while (input < 1 || input > 2) {
        printf("Wybor nie rozpoznany. Sprobuj jeszcze raz.\n");
        scanf("%d", &input);
        fflush(stdin);
    }
    return input;
}

void createStudents() {
    while (1) {
        createStudent();
        printf("Czy chcesz dodac nastepnego studenta?\n");
        if (yesNoInput() == 2) break;
    }
}

void displayStudentsTable() {
    system("cls");
    printf("Lista studentow (%d)\n---------------\n", numberOfStudents);
    printf(" Id  Inicjaly  Nr indeksu  Punkty  Nieobecnosci  Ocena\n");
    for (int i=0; i<55; i++) printf("-");
    printf("\n");

    for (int i=0; i<numberOfStudents; i++) {
        Student current = listOfStudents[i];
        printf(
            "%3d  %8s  %10d  %6d  %12d  %5.1f\n",
            current.id,
            current.initials, 
            current.indexNumber, 
            current.points, 
            current.absence,
            current.grade
        );
    }
    printf("\n\n");
    system("pause");
}

void setUpMaxPoints() {
    printf("Ile bylo maksymalnie punktow do zdobycia w kursie?\n");
    scanf("%d", &maxPoints);
    fflush(stdin);
    while (maxPoints < 1) {
        printf("Maksymalna liczba punktow nie moze byc mniejsza od 1.\nSprobuj jeszcze raz.\n");
        scanf("%d", &maxPoints);
        fflush(stdin);
    }
}

void gradeStudent(int id) {
    int index = getStudentIndexFromId(id);
    if (index == -1) return;
    Student student = listOfStudents[index];
    student.score = (float) student.points / (float) maxPoints;
    if (student.score > 0.9) student.grade = 5.0;
    else if (student.score > 0.8) student.grade = 4.5;
    else if (student.score > 0.7) student.grade = 4.0;
    else if (student.score > 0.6) student.grade = 3.5;
    else if (student.score > 0.5) student.grade = 3.0;
    else student.grade = 2.0;
    listOfStudents[index] = student;
}

void gradeStudents() {
    system("cls");
    printf("Wystawianie ocen studentom\n--------------\n");
    setUpMaxPoints();
    for (int id=1; id<=numberOfStudents; id++) {
        gradeStudent(id);
    }
    if (numberOfStudents > 1) {
        sortStudentsByIndexNumber();
        sortStudentsByAbsence();
        sortStudentsByPoints();
    }
    printf("Czy chcesz wyswietlic tabele z wynikami?\n");
    if (yesNoInput() == 1) displayStudentsTable();
}




int main() {
    int option = 0;
    int runProgram = 1;
    while(runProgram) {
        displayMainMenu();
        option = getOption();
        switch (option)
        {
            case 1:
                createStudents();
                break;

            case 2:
                displayStudentsTable();
                break;
            case 3:
                gradeStudents();
                break;
            case 0:
                runProgram = 0;
                break;
            default:
                break;
        }
    }
    return 0;
}