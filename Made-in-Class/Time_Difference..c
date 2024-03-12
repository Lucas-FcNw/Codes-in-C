#include <stdio.h>

int minutos(int hora, int minuto) {
    return hora * 60 + minuto;
}

int diferenca(int tempo1, int tempo2) {
    return tempo1 - tempo2;
}

int main() {
    int hora1, minuto1, hora2, minuto2;
    int tempo1, tempo2, dif;

    printf("Informe o primeiro horário (hora:minuto): ");
    scanf("%d:%d", &hora1, &minuto1);

    printf("Informe o segundo horário (hora:minuto): ");
    scanf("%d:%d", &hora2, &minuto2);

    tempo1 = minutos(hora1, minuto1);
    tempo2 = minutos(hora2, minuto2);

    dif = diferenca(tempo1, tempo2);

    printf("A diferença entre os horários é de %d minutos.\n", dif);

    return 0;
}
