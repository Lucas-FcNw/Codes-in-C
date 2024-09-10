#include <stdio.h>

int main() {
    // Definindo um vetor de inteiros com tamanho 5
    int vetor[5];

    // Preenchendo o vetor com valores
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    
// Também pode ser feito assim    https://www.reddit.com/r/brasil/comments/1680xft/comprei_todas_as_batatas_fritas_do_supermercado/?rdt=55301

// int vetor[5] = {10, 20, 30, 40, 50};
    // Imprimindo os valores do vetor
    printf("Valores do vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    

    return 0;
}