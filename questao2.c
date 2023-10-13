#include <stdio.h>

/*
    Mostrar a soma dos naturais de 1 até 100.
    Ou seja, 1 + 2 + 3 + ... + 100
*/

int main() {
    int soma;

    for (int i = 0; i < 101; i++) {
        soma = soma + i;
    }

    printf("A soma dos 100 primeiros número natuais");
    printf(" é %d", soma);

    return 0;
}