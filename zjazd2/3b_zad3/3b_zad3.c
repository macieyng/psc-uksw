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
    int reward;
    
    printf("Milionerzy\n-------------\n");
    printf("Witamy w programie milionerzy!\nJa nazywam sie Ubert Hurbanski i jestem gospodarzem tego programu.\nDzisiaj o milion zlotych zagra z nami...\n");
    printf("-------------\nPodaj pierwsza litere imienia: ");
    playerName = getchar();
    fflush(stdin);
    printf("-------------\n... Gracz %c\n\n", playerName);

    // Pytanie 1
    reward = 500;
    printf("Graczu %c, oto twoje pierwsze pytanie za %d zl.\n", playerName, reward);
    printf("Na akord mozna:\n");
    printf("A | spac\tB | pracowac\tC | spiewac\tD | podrozowac\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    // scanf(" %c", &answear);
    printf("%c", stdin);
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... B!\n");
    if (answear == 'b' || answear == 'B') {
        printf("Gratulacje! Wygrales %d zl!\n", reward);
    } else {
        printf("Niestety... Przegrales i odchodzisz bez wygranej.\nZegnaj!");
        return 0;
    }

    printf("Czy chcesz grac dalej? (t/n)");
    answear = getchar();
    fflush(stdin);
    if (answear == 'n' || answear == 'N') {
        printf("Gratulacje! Odchodzisz z programu z wygrana %d zl!", reward);
        return 0;
    }

    // Pytanie 2
    reward = 1000;
    printf("Drugie pytanie za gwarantowane %d zl.\n", reward);
    printf("Co kaftan bezpieczenstwa ma znacznie dluzsze niz zwykly kaftan:\n");
    printf("A | przod\tB | rekawy\tC | tyl\tD | kolnierz\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... B!\n");
    if (answear == 'b' || answear == 'B') {
        printf("Gratulacje! Wygrales gwarantowane %d zl!\n", reward);
    } else {
        printf("Niestety... Przegrales i odchodzisz bez wygranej.\nZegnaj!");
        return 0;
    }

    printf("Czy chcesz grac dalej? (t/n)");
    answear = getchar();
    fflush(stdin);
    if (answear == 'n' || answear == 'N') {
        printf("Gratulacje! Odchodzisz z programu z wygrana %d zl!", reward);
        return 0;
    }

    // Pytanie 3
    reward = 2000;
    printf("Trzecie pytanie za %d zl.\n", reward);
    printf("Skad pochodzi Conan Barbarynca\n");
    printf("A | z Rivii\tB | z Oz\tC | z Mordoru\tD | z Cimmerii\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... D!\n");
    if (answear == 'd' || answear == 'D') {
        printf("Gratulacje! Wygrales reward zl!\n", reward);
    } else {
        printf("Niestety... Przegrales i odchodzisz z gwarantowanym 1000 zl.\nZegnaj!");
        return 0;
    }

    printf("Czy chcesz grac dalej? (t/n)");
    answear = getchar();
    fflush(stdin);
    if (answear == 'n' || answear == 'N') {
        printf("Gratulacje! Odchodzisz z programu z wygrana %d zl!", reward);
        return 0;
    }

    // Pytanie 4
    reward = 5000;
    printf("Czwarte pytanie za %d zl.\n", reward);
    printf("Odrazajacy drab z Kabaretu Starszych Panow dubeltowke wezmie, wyjdzie i...: \n");
    printf("A | rach-ciach!\tB | buch, buch!\tC | z rur dwoch\tD | bum w brzuch\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... B!\n");
    if (answear == 'b' || answear == 'B') {
        printf("Gratulacje! Wygrales %d zl!\n", reward);
    } else {
        printf("Niestety... Przegrales i odchodzisz z gwarantowanym 1000 zl.\nZegnaj!");
        return 0;
    }

    printf("Czy chcesz grac dalej? (t/n)");
    answear = getchar();
    fflush(stdin);
    if (answear == 'n' || answear == 'N') {
        printf("Gratulacje! Odchodzisz z programu z wygrana %d zl!", reward);
        return 0;
    }

    // Pytanie 5
    reward = 10000;
    printf("Piate pytanie za %d zl.\n", reward);
    printf("Komiksowym „dzieckiem” rysownika Boba Kane’a jest: \n");
    printf("A | Superman\tB | Batman\tC | Spider-man\tD | Captain America\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... B!\n");
    if (answear == 'b' || answear == 'B') {
        printf("Gratulacje! Wygrales %d zl!\n", reward);
    } else {
        printf("Niestety... Przegrales i odchodzisz z gwarantowanym 1000 zl.\nZegnaj!");
        return 0;
    }

    printf("Czy chcesz grac dalej? (t/n)");
    answear = getchar();
    fflush(stdin);
    if (answear == 'n' || answear == 'N') {
        printf("Gratulacje! Odchodzisz z programu z wygrana %d zl!", reward);
        return 0;
    }

    // Pytanie 6
    reward = 20000;
    printf("Szoste pytanie za %d zl.\n", reward);
    printf("Ryba nie jest: \n");
    printf("A | swinka\tB | rozpior\tC | krasnopiorka\tD | kraska\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... D!\n");
    if (answear == 'd' || answear == 'D') {
        printf("Gratulacje! Wygrales %d zl!\n", reward);
    } else {
        printf("Niestety... Przegrales i odchodzisz z gwarantowanym 1000 zl.\nZegnaj!");
        return 0;
    }

    printf("Czy chcesz grac dalej? (t/n)");
    answear = getchar();
    fflush(stdin);
    if (answear == 'n' || answear == 'N') {
        printf("Gratulacje! Odchodzisz z programu z wygrana %d zl!", reward);
        return 0;
    }

    // Pytanie 7
    reward = 40000;
    printf("Siodme pytanie za gwarantowane 40000 zl.\n");
    printf("Kto jest mistrzem tego samego oręża, w jakim specjalizowała się mitologiczna Artemida? \n");
    printf("A | Zorro\tB | Legolas\tC | Don Kichot\tD | Longinus Podbipieta\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... B!\n");
    if (answear == 'b' || answear == 'B') {
        printf("Gratulacje! Wygrales gwarantowane %d zl!\n", reward);
    } else {
        printf("Niestety... Przegrales i odchodzisz z gwarantowanym 1000 zl.\nZegnaj!");
        return 0;
    }

    printf("Czy chcesz grac dalej? (t/n)");
    answear = getchar();
    fflush(stdin);
    if (answear == 'n' || answear == 'N') {
        printf("Gratulacje! Odchodzisz z programu z wygrana %d zl!", reward);
        return 0;
    }

    // Pytanie 8
    reward = 75000;
    printf("Osme pytanie za 75000 zl.\n");
    printf("Który aktor urodził się w roku opatentowania kinematografu braci Lumière? \n");
    printf("A | Rudolph Valentino\tB | Humphrey Bogart\tC | Charlie Chaplin\tD | Fred Astaire\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... A!\n");
    if (answear == 'a' || answear == 'A') {
        printf("Gratulacje! Wygrales %d zl!\n", reward);
    } else {
        printf("Niestety... Przegrales i odchodzisz z gwarantowanym 40000 zl.\nZegnaj!");
        return 0;
    }

    printf("Czy chcesz grac dalej? (t/n)");
    answear = getchar();
    fflush(stdin);
    if (answear == 'n' || answear == 'N') {
        printf("Gratulacje! Odchodzisz z programu z wygrana %d zl!", reward);
        return 0;
    }

    // Pytanie 9
    reward = 125000;
    printf("Dziewiate pytanie za %d zl.\n", reward);
    printf("Mowa w obronie poety Archiasza przeszła do historii jako jeden z najświetniejszych popisów retorycznych: \n");
    printf("A | Izokratesa\tB | Cycerona\tC | Demostenesa\tD | Kwintyliana\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... B!\n");
    if (answear == 'b' || answear == 'B') {
        printf("Gratulacje! Wygrales %d zl!\n", reward);
    } else {
        printf("Niestety... Przegrales i odchodzisz z gwarantowanym 40000 zl.\nZegnaj!");
        return 0;
    }

    printf("Czy chcesz grac dalej? (t/n)");
    answear = getchar();
    fflush(stdin);
    if (answear == 'n' || answear == 'N') {
        printf("Gratulacje! Odchodzisz z programu z wygrana %d zl!", reward);
        return 0;
    }

    // Pytanie 10
    reward = 250000;
    printf("Dziesiate pytanie za %d zl.\n", reward);
    printf("Kto był nadwornym malarzem króla Filipa IV Habsburga? \n");
    printf("A | Mercello Bacciarelli\tB | Jan van Eyck\tC | Diego Velazquez\tD | Jacques-Louis David\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... C!\n");
    if (answear == 'c' || answear == 'C') {
        printf("Gratulacje! Wygrales %d zl!\n", reward);
    } else {
        printf("Niestety... Przegrales i odchodzisz z gwarantowanym 40000 zl.\nZegnaj!");
        return 0;
    }

    printf("Czy chcesz grac dalej? (t/n)");
    answear = getchar();
    fflush(stdin);
    if (answear == 'n' || answear == 'N') {
        printf("Gratulacje! Odchodzisz z programu z wygrana %d zl!", reward);
        return 0;
    }

    // Pytanie 11
    reward = 500000;
    printf("Jedenaste pytanie za %d zl.\n", reward);
    printf("Likier maraskino produkuje się z maraski, czyli odmiany: \n");
    printf("A | wisni\tB | jabloni\tC | figi\tD | gruszy\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... A!\n");
    if (answear == 'a' || answear == 'A') {
        printf("Gratulacje! Wygrales %d zl!\n", reward);
    } else {
        printf("Niestety... Przegrales i odchodzisz z gwarantowanym 40000 zl.\nZegnaj!");
        return 0;
    }

    printf("Czy chcesz grac dalej? (t/n)");
    answear = getchar();
    fflush(stdin);
    if (answear == 'n' || answear == 'N') {
        printf("Gratulacje! Odchodzisz z programu z wygrana %d zl!", reward);
        return 0;
    }

    // Pytanie 12
    reward = 1000000;
    printf("Ostatnie pytanie za %d zl.\n", reward);
    printf("Z gry na jakim instrumencie słynie Czesław Mozil? \n");
    printf("A | na kornecie\tB | na akordeonie\tC | na djembe\tD | na ksylofonie\n");
    printf("Jaka jest twoja odpowiedz? \n");
    answear = getchar();
    fflush(stdin);
    printf("Prawidlowa odpowiedz to... B!\n");
    if (answear == 'b' || answear == 'B') {
        printf("Gratulacje! Wygrales %d zl!\n", reward);
    } else {
        printf("Niestety... Przegrales i odchodzisz z gwarantowanym 40000 zl.\nZegnaj!");
        return 0;
    }

    return 0;
}
