#include<stdio.h>

int main(){
    int x;
    printf("Testowanie instr. przypisania.\n\n");
    x = 3;
    printf("Po x=3;       wart. x jest: %d\n", x);
    x = 5;
    printf("Po x=5;       wart. x jest: %d\n", x);
    x += 2;
    printf("Po x=x+2;     wart. x jest: %d\n", x);
    x *= (x + 1);
    printf("Po x=x*(x+1); wart. x jest: %d\n", x);
    x += 1;
    printf("Po x=x+1;     wart. x jest: %d\n", x);
    x -= (3 / 4);
    printf("Po x=x-(3/4); wart. x jest: %d\n", x);
    x /= (x + 1);
    printf("Po x=x/(x+1); wart. x jest: %d\n", x);
    x--;
    printf("Po x--;       wart. x jest: %d\n", x);
    printf("\n\nKoniec programu.  \n");
    return 0;
}