#include <stdio.h>

int main() {
    char aluno[100];
    float n1, n2, n3, media;
    float frequencia;

    printf("Olá, digite seu nome: ");
    fgets(aluno, sizeof(aluno), stdin);

    printf("Digite suas notas: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    printf("Digite sua frequência: ");
    scanf("%f", &frequencia);

    media = (n1 + n2 + n3) / 3;

    printf("Prezado %s, sua média é %.2f e a frequencia é de %.2f%%.\n", aluno, media, frequencia);

    if (media >= 6 && frequencia >= 75) {
        printf("Parabéns, você fez o mínimo.");
    } else {
        printf("Burro, Burro, Burro!");
    }
    return 0;
}