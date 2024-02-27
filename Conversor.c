#include <stdio.h>

float c_to_f(float c) { return c * 1.8 + 32; }
float c_to_k(float c) { return c + 273.15; }
float f_to_c(float f) { return (f - 32) * 5 / 9; }
float f_to_k(float f) { return (f - 32) * 5 / 9 + 273.15; }
float k_to_c(float k) { return k - 273.15; }
float k_to_f(float k) { return (k - 273.15) * 1.8 + 32; }

int main()
{
    int opcao;
    float temp;
    char resposta;

    do {
        while (1)
        {
            printf("Escolha a escala de entrada:\n");
            printf("1 - Celsius\n");
            printf("2 - Fahrenheit\n");
            printf("3 - Kelvin\n");
            printf("Opção: ");
            scanf("%d", &opcao);
            if (opcao < 1 || opcao > 3)
            {
                printf("Opção inválida!\n");
                continue;
            }
            printf("Digite a temperatura: ");
            scanf("%f", &temp);
            break;
        }

        switch (opcao)
        {
        case 1:
            printf("%.2f°C = %.2f°F\n", temp, c_to_f(temp));
            printf("%.2f°C = %.2f°K\n", temp, c_to_k(temp));
            break;
        case 2:
            printf("%.2f°F = %.2f°C\n", temp, f_to_c(temp));
            printf("%.2f°F = %.2f°K\n", temp, f_to_k(temp));
            break;
        case 3:
            printf("%.2fK = %.2f°C\n", temp, k_to_c(temp));
            printf("%.2fK = %.2f°F\n", temp, k_to_f(temp));
            break;
        }

        printf("Deseja realizar outra conversão? (s/n): ");
        scanf(" %c", &resposta);

    } while (resposta == 's' || resposta == 'S');

    return 0;
}
