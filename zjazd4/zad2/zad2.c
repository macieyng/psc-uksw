#include <stdio.h>
#include <math.h>

int main() {
    double sum = 0;
    int bottomCelsius, topCelcius;

    printf("Podaj dolna wartosc stopni Celcjuesza: ");
    scanf("%d", &bottomCelsius);

    while(1) {
        printf("Podaj gorna wartosc stopni Celcjusza: ");
        scanf("%d", &topCelcius);
        fflush(stdin);
        if(topCelcius >= bottomCelsius) {
            break;
        }
        printf("Podana gorna wartosc musi byc wieksza od podanej dolnej wartosci.\n");
    }

    printf("%5s%8s%8s\n", "C", "F", "K");

    for(int celsius=bottomCelsius; celsius<=topCelcius; celsius++){
        float farenheit = (9 / 5.0) * celsius + 32.0;
        float kelvin = celsius + 273.15;

        printf("%5d %8.2f %8.2f\n", celsius, farenheit, kelvin);
    }

}
