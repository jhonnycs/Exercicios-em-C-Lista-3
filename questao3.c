#include <stdio.h>

/*
    Receber do usuário um inteiro e exibir a tabuada
    de multiplicação desse inteiro
*/

int main() {
    int num;

    printf("Digite um número inteiro:\n> ");
    scanf("%d", &num);
    printf("\n");

    for (int i = 1; i < 11; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    

    return 0;
}