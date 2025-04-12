#include <stdio.h> // Inclusão da biblioteca

void moverTorre (int casas){  // Movimento recursivo da TORRE (horizontal para direita)
    if (casas > 0) {
        printf("Mover para casa da DIREITA \n");
        moverTorre (casas -1);
    }
}
    void moverBispo(int casas) { // Movimento do BISPO (diagonal direita e cima)
        // Verifica se o número de casas é válido para movimento
        if (casas <= 0) return;

        // Iniciar posição inicial do bispo
        int x = 0; // Linha inicial
        int y = 0; // Coluna inicial

        // Loop para mover o bispo 5 casas na diagonal
        for (int i = 0; i < casas; i++) { // Loop externo para o movimento vertical de (i)

            for (int j = 0; j < 1; j++) { // Loop interno para o movimento horizontal de (j)
            printf("Mover para a casa DIAGONAL (DIREITA e CIMA)\n");
            }
        }
    }
        void moverRainha (int casas){
            if (casas > 0){
                printf("Mover para casa da esquerda\n");
                moverRainha (casas -1);
            }
            
        }
            void moverCavalo() {
                for (int i = 2; i <= 2; i++) { 
                    for (int j = 1; j <= 1; j++) { 
                        if ((i * i + j * j) == 5) {
                            printf("Mover CAVALO: 2 para CIMA e 1 para DIREITA\n");
                        }
                    }
                }
            }

        
int main () { // Função principal
            
    int opcao; // Variável para controlar das peças do jogo
   
    
        printf("\n       ** JOGO DE XADREZ **\n\n");
        printf("Vamos movimentar quatro peças: TORRE, BISPO, RAINHA e CAVALO.\n\n");

    do {   // Loop para continuar mostrando o menu até que o usuário escolha a opção 0 (sair)
            // Menu de opções para escolha das peças
        printf("____MENU____\n"); 
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
                moverTorre(5); // Função recurciva para movimento da torre
                break;

            case 2: { // Casa da peça BISPO
                printf("\n--- MOVIMENTO BISPO ---\n");
                moverBispo(5);
                break;
            }

            case 3: { // Casa da peça RAINHA
                printf("\n--- MOVIMENTO RAINHA ---\n");
                moverRainha(8);
                break;
            }
            case 4: { // Case da peça CAVALO
                printf("\n--- MOVIMENTO CAVALO ---\n\n");
                moverCavalo();
                break;
            }
            case 0: // Case para sair do jogo
                printf("\nEncerrando o jogo...\n");
                break;

            default: // case padrão caso seja digitada uma opção errada do menu
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
        // Mensagem para o usuário escolher outra opção
        if (opcao != 0) {
            printf("\nEscolha outra peça:\n");
        }
    } while (opcao != 0); // O loop continua até o usuário escolher a opção 0 (sair)
    

    printf("\nObrigado por jogar!\n\n"); // Mensagem de agradecimeto

    return 0; // Fim do prograrma
}
