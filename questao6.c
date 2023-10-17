#include <stdio.h>

// Pegar 3 números do usuário e imprimi-los em ordem crescente

int main() {
    int numeros[3];

    for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++) {
        printf("Digite o número inteiro %d\n> ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("\nAntes de ordenar:\n");
    for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++) {
        printf("elemento %d: %d\n", i, numeros[i]);
    }
    
    for (int i = 0; i < (sizeof(numeros) / sizeof(numeros[0]))-1; i++) {
        for (int j = 0; j < (sizeof(numeros) / sizeof(numeros[0]))-1; j++) {
            if (numeros[j] > numeros[j+1]) {
                int aux;
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
    printf("\nDepois de ordenar:\n");
    for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++) {
        printf("elemento %d: %d\n", i, numeros[i]);
    }

    return 0;
}