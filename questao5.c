#include <stdio.h>


// Mostrar o fatorial de um número


int main() {
    int num;
    
    printf("Digite um número inteiro positivo:\n> ");
    scanf("%d", &num);

    while (num < 0) {
        printf("Por favor, digite um número positivo:\n> ");
        scanf("%d", &num);
    }
    
    int result = num;
    for (int i = num; i > 1; i--) {
        result = result * (i-1);
    }

    printf("\n%d! = %d", num, result);

    return 0;
}
