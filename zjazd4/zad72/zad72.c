#include <stdio.h>

int main() {
    printf("    ");
    for (int i=1; i<=15; i++) printf("%4d", i);
    printf("\n");
    for (int i=1; i<=16; i++) printf("----");
    printf("\n");
    for(int i=1; i<=15; i++) {
        printf("%2d |", i);
        for(int j=1; j<=15; j++){
            printf("%4d", i*j);
        }
        printf("\n");
    }
}