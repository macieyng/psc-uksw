// Napisz quiz „milionerzy”. Użytkownik nie ma do dyspozycji kół ratunkowych i ma odpowiedzieć na 12 pytań.
// Tak jak w milionerach tabela z kwotami za pytania wygląda następująco:
// tabela z kwotami. Wartości pogrubione odpowiadają nagrodzie gwarantowanej
// Wymyśl własne pytania i odpowiedzi. Użytkownikowi wyświetla się kwota o jaką gra oraz opcje pozwalające mu:
// - odpowiedzieć na pytanie
// - zrezygnować i wyjść z aktualną kwotą wygranej.
// Program na końcu wypisze wysokość wygranej. Pamiętaj, o kontroli poprawności danych. Do weryfikacji czy użytkownik wpisał a/A b/B itp użyj odpowiedniej funkcji z ctype.h
// Po wykonaniu programu wyślij go swojemu znajomemu. Dowiedz się ile pieniędzy wygrał w Twojej grze.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char playerName, answear;
    
    printf("Milionerzy\n-------------\n");
    printf("Witamy w programie milionerzy!\nJa nazywam sie Ubert Hurbanski i jestem gospodarzem tego programu.\nDzisiaj o milion zlotych zagra z nami...\n");
    printf("-------------\nPodaj pierwsza litere imienia: ");
    playerName = getchar();
    fflush(stdin);
    printf("-------------\n... Gracz %c\n\n", playerName);

    // Pytanie 1
    printf("Graczu %c, oto twoje pierwsze pytanie za 500 zl.\n", playerName);
    printf("Na akord mozna:\n");
    printf("A | spac\tB | pracowac\tC | spiewac\tD | podrozowac\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... B!\n");
    if (answear == "b" || answear == "B") {
        printf("Gratulacje! Wygrales 500 zl!\n");
    } else {
        printf("Niestety... Przegrales i odchodzisz bez wygranej.\nZegnaj!");
        return 0;
    }

    // Pytanie 2
    printf("Drugie pytanie za gwarantowane 1000 zl.\n", playerName);
    printf("Co kaftan bezpieczenstwa ma znacznie dluzsze niz zwykly kaftan:\n");
    printf("A | przod\tB | rekawy\tC | tyl\tD | kolnierz\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... B!\n");
    if (&answear == "b") {
        printf("Gratulacje! Wygrales gwarantowane 1000 zl!\n");
    } else {
        printf("Niestety... Przegrales i odchodzisz bez wygranej.\nZegnaj!");
        return 0;
    }

    return 0;
}
