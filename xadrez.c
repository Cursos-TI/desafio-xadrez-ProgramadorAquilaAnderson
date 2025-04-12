#include <stdio.h>

int main () {
    int opcao;
    int movimentos = 0;

        printf("\n           ** JOGO DE XADREZ **\n\n");
        printf("Vamos movimentar três peças: torre, bispo e rainha.\n\n");
        printf("INSTRUÇÕES DE MOVIMENTO DAS PEÇAS:\n\n");
        printf("TORRE  => move uma casa para cada direção;\n");
        printf("BISPO  => move na diagonal quantas casas necessárias;\n");
        printf("RAINHA => move em qualquer direção quantas casas necessárias;\n\n");

        printf("__MENU__\n");
        printf("  1. TORRE\n");
        printf("  2. BISPO\n");
        printf("  3. RAINHA\n");
        printf("  0. SAIR\n\n");

        printf("Escolha uma peça (ou 0 para sair): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- MOVIMENTO TORRE ---\n");
                for (int i = 1; i <= 5; i++) {
                    printf("Movimento %d: DIREITA\n", i);
                    movimentos++;
                }
                break;

            case 2: {
                printf("\n--- MOVIMENTO BISPO ---\n");
                int i = 0;
                do {
                    printf("Movimento %d: Diagonal para DIREITA e CIMA\n", i + 1);
                    i++;
                    movimentos++;
                } while (i < 3);
                break;
            }

            case 3: {
                printf("\n--- MOVIMENTO RAINHA ---\n");
                int i = 0;
                while (i < 3) {
                    printf("Movimento %d: Frente\n", i + 1);
                    movimentos++;
                    printf("Movimento %d: Cima\n", i + 1);
                    movimentos++;
                    i++;
                }
                break;
            }

            case 0:
                printf("\nEncerrando o jogo...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    
    printf("\nObrigado por jogar!\n");

    return 0;
}

