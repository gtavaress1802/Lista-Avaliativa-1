#include <stdio.h>

int main() {
    int senha_cadastrada, senha_inserida;
    
    printf("Digite a senha de 4 digitos para cadastro: ");
    scanf("%d", &senha_cadastrada);

    if (senha_cadastrada < 1000 || senha_cadastrada > 9999) {
        printf("Senha invalida. A senha deve ter 4 digitos.\n");
        return 1;
    }

    printf("Digite a senha para validacao: ");
    scanf("%d", &senha_inserida);

    if (senha_inserida < 1000 || senha_inserida > 9999) {
        printf("Senha invalida. A senha deve ter 4 digitos.\n");
        return 1;
    }

    if (senha_inserida == senha_cadastrada) {
        printf("senha valida!\n");
    } else {
        printf("senha cadastrada: %d\n", senha_cadastrada);
        printf("senha invalida!\n");
    }

    return 0;
}