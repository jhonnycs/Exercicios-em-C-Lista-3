#include <stdio.h>

/*
    Uma calculadora onde o usuário digita dois valores
    e a operação
*/

int main() {
    int a, b, op;
    char symbol[4] = {'+', '-', 'x', '/'};

    printf("Digite o valor a:\n> ");
    scanf("%d", &a);
    printf("Digite o valor b:\n> ");
    scanf("%d", &b);
    printf("Digite a operação:\n");
    printf("(1) soma   (2) subtração   ");
    printf("(3) multiplicação   (4) divisão:\n> ");
    scanf("%d", &op);

    while (op != 1 && op != 2 && op != 3 && op != 4) {
        printf("Digite uma operação válida:\n> ");
        scanf("%d",&op);
    }
    
    int result;
    switch (op) {
    case 1:
        result = a + b;
        break;
    case 2:
        result = a - b;
        break;
    case 3:
        result = a * b;
        break;
    case 4:
        if (b == 0) {
            printf("Não existe divisão por 0\n");
            return 1;
        }
        result = a / b;
        break;
    }
    
    printf("\n%d %c %d = %d", a, symbol[op-1], b, result);

    return 0;
}