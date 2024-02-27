#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite;

    // Gerador de números aleatórios travado em 100 como máximo.
    srand(time(0));
    numeroSorteado = rand() % 100 + 1;

    printf("Tente adivinhar o número sorteado (entre 1 e 100): ");
    scanf("%d", &palpite);

    // Verificador de palpite.
    while (palpite < 1 || palpite > 100) {
        printf("Valor inválido! Tente novamente: ");
        scanf("%d", &palpite);
    }

    // Verificando se o palpite condiz com o número sorteado.
    if (palpite == numeroSorteado) {
        printf("Parabéns!!! Você acertou!\n");
    } else if (palpite < numeroSorteado) {
        printf("Você chutou muito baixo! O valor correto é %d.\n", numeroSorteado);
    } else {
        printf("Você chutou muito alto! O valor correto é %d.\n", numeroSorteado);
    }

    return 0;
}
