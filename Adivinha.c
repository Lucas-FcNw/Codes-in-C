#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); //Isso é o inicializador do gerador de números aleatórios com base no tempo

    int saldo = 1000;
    int aposta;
    int numeroEscolhido;

    printf("Bem-vindo à roleta do cassino!\n");
    printf("Seu saldo atual: $%d\n", saldo);

    while (saldo > 0) {
        printf("\nFaça sua aposta (0 para sair): ");
        scanf("%d", &aposta);

        if (aposta == 0) {
            printf("Obrigado por jogar! Seu saldo final é: $%d\n", saldo);
            break;
        }

        if (aposta > saldo) {
            printf("Aposta excede o saldo disponível.\n");
            continue;
        }

        printf("Escolha um número para apostar (entre 0 e 35): ");
        scanf("%d", &numeroEscolhido);

        if (numeroEscolhido < 0 || numeroEscolhido > 35) {
            printf("Número inválido. Escolha um número entre 0 e 35.\n");
            continue;
        }

        int numeroSorteado = rand() % 36;
        printf("Número sorteado: %d\n", numeroSorteado);

        if (numeroEscolhido == numeroSorteado) {
            saldo += 35 * aposta;  // Pagamento de 35 para 1
            printf("Parabéns! Você acertou o número e ganhou $%d!\n", 35 * aposta);
        } else {
            saldo -= aposta;
            printf("Que pena! Você perdeu $%d. Seu saldo atual é: $%d\n", aposta, saldo);
        }
    }

    if (saldo <= 0) {
        printf("Seu saldo acabou. Obrigado por jogar!\n");
    }

    return 0;
}
