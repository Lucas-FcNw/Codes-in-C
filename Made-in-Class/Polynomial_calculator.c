#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int opcao;
    int grau1, grau2, maiorGrau;
    int *polinomio1 = NULL;
    int *polinomio2 = NULL;
    int *resultado = NULL;

    do {
        printf("Escolha a operação:\n");
        printf("1 - Valor do Polinômio\n");
        printf("2 - Soma de Polinômios\n");
        printf("3 - Multiplicação de Polinomios\n");
        printf("4 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                

                // Solicita o grau do primeiro polinômio.
                printf("Digite o grau do Polinômio: ");
                scanf("%d", &grau1);

                // Direciona memória para guardar os coeficientes do primeiro polinômio.
                polinomio1 = (int *)malloc((grau1 + 1) * sizeof(int));

                // Pede os coeficientes do primeiro polinômio.
                for (int i = grau1; i >= 0; i--) {
                    printf("Digite o coeficiente de x^%d: ", i);
                    scanf("%d", &polinomio1[i]);
                }

                int valor;

                // Solicita o valor de x.
                printf("Digite o valor de x: ");
                scanf("%d", &valor);

                int resultadoValor = 0;

                // Calcula o valor do polinômio em x.
                for (int i = grau1; i >= 0; i--) {
                    resultadoValor += polinomio1[i] * pow(valor, i);
                }

                // Exibe o valor do polinômio em x.
                printf("O valor do polinômio em x=%d e %d\n", valor, resultadoValor);

                // Libera a memória o primeiro polinômio.
                free(polinomio1);
                polinomio1 = NULL;
                break;

            case 2:
                
                // Soma de polinomios

                // Solicita o grau do primeiro polinômio.
                printf("Digite o grau do primeiro Polinômio: ");
                scanf("%d", &grau1);

                // Direciona memória para guardar os coeficientes do primeiro polinômio.
                polinomio1 = (int *)malloc((grau1 + 1) * sizeof(int));

                // Pede os coeficientes do primeiro polinômio.
                for (int i = grau1; i >= 0; i--) {
                    printf("Digite o coeficiente de x^%d: ", i);
                    scanf("%d", &polinomio1[i]);
                }

                // Solicita o grau do segundo polinômio.
                printf("Digite o grau do segundo Polinômio: ");
                scanf("%d", &grau2);

                // Direciona memória para guardar os coeficientes do segundo polinômio.
                polinomio2 = (int *)malloc((grau2 + 1) * sizeof(int));

                // Pede os coeficientes do segundo polinômio.
                for (int i = grau2; i >= 0; i--) {
                    printf("Digite o coeficiente de x^%d: ", i);
                    scanf("%d", &polinomio2[i]);
                }

                // Determina o polinômio de maior grau.
                maiorGrau = (grau1 > grau2) ? grau1 : grau2;

                // Direciona memória para o polinômio da soma.
                resultado = (int *)malloc((maiorGrau + 1) * sizeof(int));

                   // Colocao os polinômio com resultado de zeros.
                for (int i = 0; i <= maiorGrau; i++) {
                    resultado[i] = 0;
                }

                // Realiza a soma dos polinômios.
                for (int i = 0; i <= grau1; i++) {
                    resultado[i] += polinomio1[i];
                }

                for (int i = 0; i <= grau2; i++) {
                    resultado[i] += polinomio2[i];
                }

                // Exibe o resultado da soma.
                printf("A soma dos polinômios resulta em:\n");
                for (int i = maiorGrau; i >= 0; i--) {
                    if (resultado[i] != 0) {
                        printf("%dx^%d ", resultado[i], i);
                    }
                }
                printf("\n");

                // Libera a memória para os polinômios.
                free(polinomio1);
                free(polinomio2);
                free(resultado);
                polinomio1 = NULL;
                polinomio2 = NULL;
                resultado = NULL;
                break;

            case 3:
                // Multiplicacao de polinomios

                // Solicita o grau do primeiro polinômio.
                printf("Digite o grau do primeiro Polinômio: ");
                scanf("%d", &grau1);

                // Direciona memória para guardar os coeficientes do primeiro polinômio.
                polinomio1 = (int *)malloc((grau1 + 1) * sizeof(int));

                // Solicita os coeficientes do primeiro polinômio.
                for (int i = grau1; i >= 0; i--) {
                    printf("Digite o coeficiente de x^%d: ", i);
                    scanf("%d", &polinomio1[i]);
                }

                // Solicita o grau do segundo polinômio.
                printf("Digite o grau do segundo Polinômio: ");
                scanf("%d", &grau2);

                // Direciona memória para guardar os coeficientes do segundo polinômio.
                polinomio2 = (int *)malloc((grau2 + 1) * sizeof(int));

                // Pede os coeficientes no console
                for (int i = grau2; i >= 0; i--) {
                    printf("Digite o coeficiente de x^%d: ", i);
                    scanf("%d", &polinomio2[i]);
                }

                // Calcula o grau do polinômio da multiplicação
                maiorGrau = grau1 + grau2;

                // Direciona memória para o polinômio resultado da multiplicação.
                resultado = (int *)malloc((maiorGrau + 1) * sizeof(int));

                // Coloca os polinômio com resultado de zeros.
                for (int i = 0; i <= maiorGrau; i++) {
                    resultado[i] = 0;
                }

                // Realiza a multiplicação.
                for (int i = 0; i <= grau1; i++) {
                    for (int j = 0; j <= grau2; j++) {
                        resultado[i + j] += polinomio1[i] * polinomio2[j];
                    }
                }

                // Exibe o resultado
                printf("O produto dos polinômios resulta em:\n");
                for (int i = maiorGrau; i >= 0; i--) {
                    if (resultado[i] != 0) {
                        printf("%dx^%d ", resultado[i], i);
                    }
                }
                printf("\n");

                // Libera a memória dos polinômios
                free(polinomio1);
                free(polinomio2);
                free(resultado);
                polinomio1 = NULL;
                polinomio2 = NULL;
                resultado = NULL;
                break;

            case 4:
                printf("Obrigado por calcular comigo!\n");
                printf("Este trabalho foi feito pelo grupo Suártez & Cavani, o qual tem os integrantes:\
                    \nHenrique Pena 32335857\nLucas Fernandes 32370709");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    return 0;
}
