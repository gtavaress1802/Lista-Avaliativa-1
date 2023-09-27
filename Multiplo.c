#include <stdio.h>

int main() {
    int A, B;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &A);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &B);

    if (A == B) {
        printf("Os valores lidos sao iguais.\n");
    } else {
        int maior, menor;
        if (A > B) {
            maior = A;
            menor = B;
        } else {
            maior = B;
            menor = A;
        }

        if (maior % menor == 0) {
            printf("O maior valor e %d e e multiplo de %d.\n", maior, menor);
        } else {
            printf("O maior valor e %d e nao e multiplo de %d.\n", maior, menor);
        }
    }

    return 0;
}