#include <stdio.h>

int main() {
    int valor, atual, i;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    if (scanf("%d", &valor) == 1) {
        printf("%d\n", valor);
        atual = valor;

        for(i = 0; i < 7; i++) {
            int qtd_notas = atual / notas[i];
            printf("%d nota(s) de R$ %d,00\n", qtd_notas, notas[i]);
            atual %= notas[i];
        }
    }

    return 0;
}
