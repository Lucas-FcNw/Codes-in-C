#include <stdio.h>

int main(void) {
    int resultado = 0;

    for (int contador = 0; contador < 11; ++contador){
        resultado = 5 * contador;
        printf("5 * %d = %d\n", contador, resultado);
    }
}