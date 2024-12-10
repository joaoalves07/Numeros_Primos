
#include <stdio.h>
#include <stdbool.h>

bool NumP(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void ProxNum(int num, int proximos[]) {
    int contagem = 0;
    int atual = num + 1;
    while (contagem < 3) {
        if (NumP(atual)) {
            proximos[contagem] = atual;
            contagem++;
        }
        atual++;
    }
}

int main() {
    int numero;
    int proximos[3];

    printf("Ola! Digite um numero por favor: ");
    scanf("%d", &numero);

    if (NumP(numero)) {
        printf("Analisando seu numero...\n");
        printf("O numero %d que voce escolheu e um numero primo.\n", numero);
    } else {
        printf("O numero %d que voce escolheu nao e um numero primo.\n", numero);
    }

    ProxNum(numero, proximos);
    printf("Os 3 menores numeros primos maiores que %d sao: %d, %d, %d\n", 
            numero, proximos[0], proximos[1], proximos[2]);
    printf("Espero ter ajudado :)\n");

    return 0;
}

