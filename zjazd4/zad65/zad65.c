#include <stdio.h>
#include <math.h>

int main() {
    int power = 1, count;
    printf("Ile poczatkowych poteg liczby 2 chcesz wypisac? ");
    scanf("%d", &count);

    for (int i=0; i<count; i++) {
        power *= 2;
        printf("%d ", power);
    }
}