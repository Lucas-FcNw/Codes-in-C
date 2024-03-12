#include <stdio.h>
//#include <math.h>

#define PI 3.14159

float sphere_area(float raio) {
    float area = 4 * PI * raio * raio; //Esse Pi* raio * raio é a formula da área da esfera, 4 * PI * r².
    //Para usar a função pow,tem que declarar a math.h, e tem que escrever assim, float area = 4 * PI * pow(raio, 2);
    return area;
}

int main(void) {
    float raio;
    printf("Insira o raio da esfera: ");
    scanf("%f", &raio);

    float area = sphere_area(raio);
    printf("A área da esfera é de: %.2fmm\n", area);

    return 0;
}
