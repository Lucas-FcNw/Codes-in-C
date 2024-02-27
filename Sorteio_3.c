#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite, tentativas = 0;

    // Gerador número aleatório
    srand(time(0));
    numeroSorteado = rand() % 100 + 1;
    printf("Número sorteado: %d\n", numeroSorteado);
   
    printf("Tente adivinhar o número sorteado (entre 1 e 100): ");
    scanf("%d", &palpite);

    // Verifica se o que o usuário inseruiu é valido.
    while (palpite < 1 || palpite > 100) {
        printf("Valor inválido! Tente novamente: ");
        scanf("%d", &palpite);
    }

    // Verifica se o palpite está correto
    while (palpite != numeroSorteado) {
        if (palpite < numeroSorteado) {
            printf("Você chutou muito baixo!\n");
        } else {
            printf("Você chutou muito alto!\n");
        }

        printf("Tente novamente: ");
        scanf("%d", &palpite);
        tentativas++;

        if (tentativas >= 5) {
            printf("Você excedeu o número máximo de tentativas. O número sorteado era: %d\n", numeroSorteado);
            return 0;
        }
    }

    printf("Parabéns!!! Você acertou em %d tentativas!\n", tentativas + 1);

    return 0;
}
