#include <stdio.h>

int main() {
    int x = 7, y;
    y = (x++) + 7; /*1*/
    printf("%d\n", y);
    y = (++x) + 7; /*2*/
    printf("%d\n", y);
    y = 7 + (x++); /*3*/
    printf("%d\n", y);
    y = 7 + (++x); /*4*/
    printf("%d\n", y);
    y = 7 + (x+1); /*5*/
    printf("%d\n", y);

    //  2 i 3 są równe

    x = 7;
    y = x + 7; /*1*/
    printf("%d\n", y);
    y = (2 + x) + 7; /*2*/
    printf("%d\n", y);
    y = 7 + (x + 2); /*3*/
    printf("%d\n", y);
    y = 7 + (x + 4); /*4*/
    printf("%d\n", y);
    y = 7 + (x + 5); /*5*/
    printf("%d\n", y);

}