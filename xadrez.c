#include <stdio.h> // Inclusão da biblioteca

int main () { // Função principal

    int opcao; // Variável para controlar das peças do jogo

        // Exibição inicial do jogo e instruções
        printf("\n           ** JOGO DE XADREZ **\n\n");
        printf("Vamos movimentar três peças: TORRE, BISPO e RAINHA.\n\n");
        printf("INSTRUÇÕES DE MOVIMENTO DAS PEÇAS:\n\n");
        printf("TORRE  => move uma casa para cada direção;\n");
        printf("BISPO  => move na diagonal quantas casas necessárias;\n");
        printf("RAINHA => move em qualquer direção quantas casas necessárias;\n\n");

        // Menu de opções para escolha das peças
        printf("__MENU__\n"); 
        printf("  1. TORRE\n");
        printf("  2. BISPO\n");
        printf("  3. RAINHA\n");
        printf("  4. CAVALO\n");
        printf("  0. SAIR\n\n");
        // Entrada que mostra a opção escolhida
        printf("Escolha uma peça entre 1 e 4, (ou 0 para sair): ");
        scanf("%d", &opcao); // mostra qual a escolha detro de menu

        switch (opcao) { //Estrutura de decisão que execulta o bloco de código baseado na opção escolhida do menu
            case 1: // case da peça TORRE
                printf("\n--- MOVIMENTO TORRE ---\n");
                for (int i = 1; i <= 5; i++) { // Loop de repetição for (simula o 5 movimentos da peça)
                    printf("Movimento %d: DIREITA\n", i);
                }
                break;

            case 2: { // Casa da peça BISPO
                printf("\n--- MOVIMENTO BISPO ---\n");

                int i = 0;

                do { // Loop de repetição (do while) para simular 3 movimentos da peça na diagonal, direita e cima
                    printf("Movimento %d: Diagonal para DIREITA e CIMA\n", i + 1);
                    i++;
                } while (i < 3);
                break;
            }

            case 3: { // Casa da peça RAINHA
                printf("\n--- MOVIMENTO RAINHA ---\n");
                int i = 0;
                while (i < 3) { // Loop de repetição while para simulara 3 movimetos da peça rainha
                    printf("Movimento %d: Frente\n", i + 1);
                    
                    printf("Movimento %d: Cima\n", i + 1);
                    i++;
                }
                break;
            }
            case 4: { // Case da peça CAVALO
                printf("\n--- MOVIMENTO CAVALO ---\n\n");
    
                // tipo de variável "Constante" para controlar 2 movimetos definido pela variável.
                const int repeticoesMovimento = 2; // Quantidade de movimento em "L"
                const int casasBaixo = 2; // Quantidade de movimetos para baixo
                const int casasEsquerda = 1; // Quantidade de movimetos para esquerda
    
                // Loop externo FOR para controlar a repetição do movimento do cavalo em L por 2 vez (definido pela variável)
                for (int i = 0; i < repeticoesMovimento; i++) {
    
                    // Loop interno DO-WHILE para simular o movimento "Baixo"
                    int passo = 0;
                    do {
                        printf("Baixo\n");
                         passo++;
                    } while (passo < casasBaixo);
    
                    // Outro DO-WHILE para simular o movimento "Esquerda"
                    int esquerda = 0;
                    do {
                        printf("Esquerda\n");
                        esquerda++;
                    } while (esquerda < casasEsquerda);
    
                    printf("\n"); // Pular uma linha para separar o movimento em L da peça "Cavalo"
                }
    
                break;
            }
            case 0: // Case para sair do jogo
                printf("\nEncerrando o jogo...\n");
                break;

            default: // case padrão caso seja digitada uma opção errada do menu
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    
    printf("\nObrigado por jogar!\n\n"); // Mensagem de agradecimeto

    return 0; // Fim do prograrma
}
