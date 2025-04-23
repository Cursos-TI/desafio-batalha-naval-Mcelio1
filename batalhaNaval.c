#include <stdio.h>

int main() {
    // Tamanho do tabuleiro
    int tabuleiro[10][10] = {0};  // Declaração e inicialização do tabuleiro 10x10 com 0 (água)

    // Vetor com as letras das colunas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Imprime as letras das colunas no topo (A a J)
    printf("   ");  
    for (int i = 0; i < 10; i++) {
        printf(" %c ", linha[i]);  
    }
    printf("\n");

    // Imprime o tabuleiro com as linhas numeradas (1 a 10)
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);  

        // Imprime o conteúdo do tabuleiro (0 para água, 3 para partes dos navios)
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);  
        }
        printf("\n");  
    }

    // Definindo a posição do primeiro navio (horizontal)
    int navio1_x = 2;  
    int navio1_y = 1;  
    int tamanhoNavio1 = 3; 
    
    // Coloca o navio 1 no tabuleiro (horizontal)
    for (int i = 0; i < tamanhoNavio1; i++) {
        tabuleiro[navio1_y][navio1_x + i] = 3; 
    }

    // Definindo a posição do segundo navio (vertical)
    int navio2_x = 5; 
    int navio2_y = 3;  
    int tamanhoNavio2 = 3; 

    // Coloca o navio 2 no tabuleiro (vertical)
    for (int i = 0; i < tamanhoNavio2; i++) {
        tabuleiro[navio2_y + i][navio2_x] = 3; 
    }

    // Exibe o tabuleiro com os navios posicionados
    printf("\nTabuleiro de Batalha Naval:\n");

    // Imprime novamente as letras das colunas no topo
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf(" %c ", linha[i]);  
    }
    printf("\n");

    // Imprime o conteúdo atualizado do tabuleiro com os navios linha 1 a 10
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);  
        
        // Imprime o conteúdo do tabuleiro 0 para água, 3 para partes dos navios
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);  
        }
        printf("\n");  
    }

    return 0;
}

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

