#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite, tentativas = 0;

    // Gerando um número aleatório entre 1 e 100
    srand(time(0));
    numeroSorteado = rand() % 100 + 1;

    printf("Tente adivinhar o número sorteado (entre 1 e 100): ");
    scanf("%d", &palpite);

    // Verificando se o palpite é válido
    while (palpite < 1 || palpite > 100) {
        printf("Valor inválido! Tente novamente: ");
        scanf("%d", &palpite);
    }

    // Verificando se o palpite está correto
    while (palpite != numeroSorteado) {
        if (palpite < numeroSorteado) {
            printf("Você chutou muito baixo!\n");
        } else {
            printf("Você chutou muito alto!\n");
        }

        printf("Tente novamente: ");
        scanf("%d", &palpite);
        tentativas++;
    }

    printf("Parabéns!!! Você acertou em %d tentativas!\n", tentativas + 1);

    return 0;
}
