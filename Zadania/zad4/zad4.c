// Napisz program szyfrujący kodem cezara. 
// Uzytkownik poda 4 litery oraz kod przesunięcia 
// np. poda znaki np CDZA oraz kod +1 a program po przekształceniu wypisze DEAB.
// A-Z -> 65-90
// a-z -> 97-122

#include <stdio.h>

#define UPPER_TOP 90
#define UPPER_BOTTOM 65
#define LOWER_TOP 122 
#define LOWER_BOTTOM 97

char encodeCaesarCipher(int character, int key);

int isUppercaseLetter(char character);
int isLowercaseLetter(char character);
int isLetter(char character);


int main() {
    int key;
    char character1, character2, character3, character4;
    
    printf("Szyfr Cezara\n------------------\n");
    
    printf("Podaj 4 znaki i nacisnij Enter: ");
    character1 = getchar();
    character2 = getchar();
    character3 = getchar();
    character4 = getchar();
    
    printf("Podaj klucz: ");
    scanf("%d", &key);
    character1 = encodeCaesarCipher(character1, key);
    character2 = encodeCaesarCipher(character2, key);
    character3 = encodeCaesarCipher(character3, key);
    character4 = encodeCaesarCipher(character4, key);
    
    printf("Wiadomosc: %c%c%c%c", character1, character2, character3, character4);
    return 0;
}

int isUppercaseLetter(char character) {
    return (character <= UPPER_TOP) && (character >= UPPER_BOTTOM) ? 1 : 0;
}

int isLowercaseLetter(char character) {
    return (character <= LOWER_TOP) && (character >= LOWER_BOTTOM) ? 1 : 0;
}

int isLetter(char character) {
    return isLowercaseLetter(character) || isUppercaseLetter(character);
}

char encodeCaesarCipher(int character, int key) {
    if (!isLetter(character)) return character;

    int encodedLetter = character + (key % 26);

    if(encodedLetter > LOWER_TOP && isLowercaseLetter(character) && key > 0) {
        encodedLetter = LOWER_BOTTOM + (encodedLetter - LOWER_TOP - 1); 
    } else if(encodedLetter < LOWER_BOTTOM && isLowercaseLetter(character) && key < 0) {
        encodedLetter = LOWER_TOP + (encodedLetter - LOWER_BOTTOM );
    } else if(encodedLetter > UPPER_TOP && isUppercaseLetter(character) && key > 0) {
        encodedLetter = UPPER_BOTTOM + (encodedLetter - UPPER_TOP - 1); 
    } else if(encodedLetter < UPPER_BOTTOM && isUppercaseLetter(character) && key < 0) {
        encodedLetter = UPPER_TOP + (encodedLetter - UPPER_BOTTOM );
    }

    return encodedLetter;
}

