#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 1000000000) {
        printf("Numero fora do intervalo permitido.\n");
        return 1;
    }

    int somaDigitos = 0;
    int numeroOriginal = numero;


    while (numero > 0) {
        somaDigitos += numero % 10;
        numero /= 10;
    }

    if (numeroOriginal % 2 == 0) {
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }

    printf("A soma dos digitos do numero e: %d\n", somaDigitos);

    return 0;
}