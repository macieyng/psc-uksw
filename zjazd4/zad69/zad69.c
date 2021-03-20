#include <stdio.h>
#include <math.h>

int main() {
    int rows, columns;
    printf("Ile rzedow gwiazdek chcesz wypisac? ");
    scanf("%d", &rows);
    columns = rows * 2;
    
    for (int i=0; i<rows; i++) {
        for(int j=0; j<columns; j++) {
            printf("*");
        }
        printf("\n");
    }
}