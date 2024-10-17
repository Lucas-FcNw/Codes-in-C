#include <stdio.h>
#include <ctype.h>
#include <string.h>

void maiusculas(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char frase[256];
    int mai = 0, min = 0, dig = 0, esp = 0;

    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    size_t tam = strlen(frase);
    if (tam > 0 && frase[tam - 1] == '\n') {
        frase[tam - 1] = '\0';
    }

    printf("\nCaractere e valor ASCII:\n");
    for (int i = 0; frase[i] != '\0'; i++) {
        printf("'%c' -> %d\n", frase[i], frase[i]);

        if (isupper(frase[i])) {
            mai++;
        } else if (islower(frase[i])) {
            min++;
        } else if (isdigit(frase[i])) {
            dig++;
        } else if (!isspace(frase[i])) {
            esp++;
        }
    }

    printf("\nTotal de caracteres:\n");
    printf("Maiúsculas: %d\n", mai);
    printf("Minúsculas: %d\n", min);
    printf("Dígitos: %d\n", dig);
    printf("Especiais: %d\n", esp);

    maiusculas(frase);
    printf("\nFrase em maiúsculas: %s\n", frase);

    return 0;
}

/* Feito por Lucas Fernandes. Algum dia vem a versão cometada e em inglês. */