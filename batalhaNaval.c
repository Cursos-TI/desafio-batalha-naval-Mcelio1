#include <stdio.h>

int main() {
    // Tamanho do tabuleiro 10x10
    int tabuleiro[10][10] = {0}; 

    // Vetor com as letras das colunas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Imprime as letras das colunas no topo  (A a J)
    printf("   ");  
    for (int i = 0; i < 10; i++) {
        printf(" %c ", linha[i]); 
    }
    printf("\n");

    // Imprime o tabuleiro com as linhas numeradas (1 a 10)
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);  
        
        // Imprime o conteúdo do tabuleiro 
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

