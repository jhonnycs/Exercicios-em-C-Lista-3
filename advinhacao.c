#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int chute;
    int acertou = 0;
    int tentativas;
    float pontos = 1000;

    srand(time(0));
    /*
        srand usa uma semente para aleatorizar o rand
        ao usar o time passando 0, temos os segundos que se passaram desde 
        uma data específica, deixando o valor muito próximo do aleatório
    */

    int numeroSecreto = rand() % 100;
    
    printf("Escolha a dificuldade:\n\n");
    printf("(1) Fácil   (2) Médio   (3) Difícil\n\n> ");
    
    int dificuldade;
    scanf("%d", &dificuldade);
    printf("\n");

    while(dificuldade != 1 && dificuldade != 2 && dificuldade != 3) {
        printf("Por favor, digite uma dificuldade válida: ");
        scanf("%d", &dificuldade);
    }

    switch(dificuldade) {
        case 1:
            tentativas = 20;
            break;
        case 2:
            tentativas = 14;
            break;
        case 3:
            tentativas = 6;
            break;
    }

    for(int i = 1; i <= tentativas; i++) {
        printf("Tentativa %d de %d\n", i, tentativas);
        printf("\nChute um número:\n> ");
        scanf("%d", &chute);

        if (chute < 0) {
            printf("Por favor, não chute um número negativo");
            i--;
            continue;
        }

        acertou = numeroSecreto == chute;

        if (acertou) {
            break;
        } else {
            float pontosPerdidos = abs(numeroSecreto - chute) / (float)2;

            if (chute < numeroSecreto) {
                printf("seu chute foi menor que o número secreto\n");
            } else {
                printf("seu chute foi maior que o número secreto\n");
            }
            pontos = pontos - pontosPerdidos;
        }
    }
    printf("\n");
    if (acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\nParabéns! Você acertou!\n");
        printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
    } else {
        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");
    
        printf("\nVocê perdeu! Tente novamente!\n\n");
    }
    
    return 0;
}