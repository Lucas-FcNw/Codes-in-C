#include <stdio.h>
#include <string.h>

// Remove espaços da string
void removeEspacos(char* s) {
    int j = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] != ' ') {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

// Inverte a string
void inverter(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        char tmp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = tmp;
    }
}

// Checa se a string é palíndromo
int ehPalindromo(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
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

    removeEspacos(str);
    printf("Sem espaços: %s\n", str);

    char invertida[100];
    strcpy(invertida, str);
    inverter(invertida);
    printf("Invertida: %s\n", invertida);

    if (ehPalindromo(str)) {
        printf("É palíndromo.\n");
    } else {
        printf("Não é palíndromo.\n");
    }

    return 0;
}