#include <stdio.h>
#include <math.h>

int main() {
    int rows, columns;
    printf("Ile rzedow gwiazdek ulozonych w trojkat chcesz wypisac? ");
    scanf("%d", &rows);
    columns = rows * 2 - 1;
    
    for (int i=0; i<rows; i++) {
        for(int j=0; j<columns; j++) {
            int startStars = columns / 2 - i ; // offset startu liczony od lewej strony
            int endStars = columns - startStars; // offset końca liczony od lewej strony
            if (j >= startStars && j < endStars) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

// 3 1 3
// 2 3 2
// 1 5 1
// 0 7 0 