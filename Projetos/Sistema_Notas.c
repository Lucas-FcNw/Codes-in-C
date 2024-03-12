/* Autor: Lucas Fernandes
   e-mail: lucasfc.nw@outlook.com
   Código desenvolvido no ambiente de progamação Replit.
   Caso haja problemas com acentuação adicionar o seguinte código ao progama.
   #include <locale.h> na linha 11
    setlocale(LC_ALL, "pt_BR"); na linha 53
    */
#include <stdio.h>

#define nota_minima 0
#define nota_maxima 100


int verificador(int nota) {
    return (nota >= nota_minima && nota <= nota_maxima);
}

void ordenarNotas(int notas[], int Estudantes) {
    int i, j, temp;
    int troca;

    do {
        troca = 0;
        for (i = 1; i < Estudantes; i++) {
            if (notas[i] > notas[i - 1]) {
                temp = notas[i];
                notas[i] = notas[i - 1];
                notas[i - 1] = temp;
                troca = 1;
            }
        }
    } while (troca);
}


float calcularMedia(int notas[], int Estudantes) {
    float soma = 0;
    int i;

    for (i = 0; i < Estudantes; i++) {
        soma += notas[i];
    }

    return soma / Estudantes;
}

int main() {
    int Estudantes, i;

    printf("Número de estudantes:  ");
    scanf("%d", &Estudantes);

    int notas[Estudantes];

    for (i = 0; i < Estudantes; i++) {
        int nota;
        do {
            printf("Insira a nota estudante %d: ", i + 1, nota_minima, nota_maxima);
            scanf("%d", &nota);
            if (!verificador(nota)) {
                printf("Nota inválida! A nota deve estar entre %d e %d.\n", nota_minima, nota_maxima);
            }
        } while (!verificador(nota));

        notas[i] = nota;
    }

    ordenarNotas(notas, Estudantes);

    printf("\nClassificação final:\n");
    for (i = 0; i < Estudantes; i++) {
        printf("Estudante %d: %d\n", i + 1, notas[i]);
    }

    printf("\nMédia das notas: %.2f\n", calcularMedia(notas, Estudantes));

    return 0;
}
