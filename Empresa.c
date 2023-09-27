#include <stdio.h>

int main() {
    char nivel;
    float salario, aumento;

    printf("Digite o nivel de experiencia (a, b ou c): ");
    scanf(" %c", &nivel);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    switch (nivel) {
        case 'a':
            aumento = salario * 0.05;
            break;
        case 'b':
            aumento = salario * 0.07;
            break;
        case 'c':
            aumento = salario * 0.08;
            break;
        default:
            printf("Nível de experiencia invalido.\n");
            return 1;
    }

    float novo_salario = salario + aumento;

    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}