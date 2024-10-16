#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função que remove espaço das strings
void removeSpaces(char* str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

// Função de reverter string
void reverseString(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

// Função que checa Palíndromo
int isPalindrome(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];

    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    removeSpaces(str);
    printf("Frase sem espaços: %s\n", str);

    char reversedStr[100];
    strcpy(reversedStr, str);
    reverseString(reversedStr);
    printf("Frase invertida: %s\n", reversedStr);

    if (isPalindrome(str)) {
        printf("A frase é um palíndromo.\n");
    } else {
        printf("A frase não é um palíndromo.\n");
    }

    retu
