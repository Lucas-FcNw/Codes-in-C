#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char frase[256];
    int mais = 0, minus = 0, dig = 0, espec = 0;

    // Solicita ao usuário para inserir uma frase
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remove a nova linha, se presente
    size_t len = strlen(frase);
    if (len > 0 && frase[len - 1] == '\n') {
        frase[len - 1] = '\0';
    }

    // Exibe cada caractere e seu valor ASCII
    printf("\nCaractere e seu valor ASCII:\n");
    for (int i = 0; frase[i] != '\0'; i++) {
        printf("'%c' -> %d\n", frase[i], frase[i]);

        // Contagem de tipos de caracteres
        if (isupper(frase[i])) {
            maius++;
        } else if (islower(frase[i])) {
            minus++;
        } else if (isdigit(frase[i])) {
            dig++;
        } else if (!isspace(frase[i])) {
            espec++;
        }
    }

    // Exibe contagens
    printf("\nTotal de caracteres:\n");
    printf("Maiúsculas: %d\n", mais);
    printf("Minúsculas: %d\n", minus);
    printf("Dígitos: %d\n", dig);
    printf("Especiais: %d\n", espec);

    // Converte e exibe a frase em maiúsculas
    toUpperCase(frase);
    printf("\nFrase em maiúsculas: %s\n", frase);

    return 0;
}
