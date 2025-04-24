#include <stdio.h>

#define TAM 10  // Define o tamanho do tabuleiro

int main() {
    // Tamanho do tabuleiro
    int tabuleiro[10][10] = {0};  // Declaração e inicialização do tabuleiro 10x10 com 0 (água)

    // Vetor com as letras das colunas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    printf ("Tabuleiro de Batalha Naval - Play\n");

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

    // Definindo a posição do segundo naviovertical)
    int navio2_x = 5; 
    int navio2_y = 3;  
    int tamanhoNavio2 = 3; 

    // Coloca o navio 2 no tabuleiro (vertical)
    for (int i = 0; i < tamanhoNavio2; i++) {
        tabuleiro[navio2_y + i][navio2_x] = 3; 
    }

    // Exibe o tabuleiro com os navios posicionados
    printf("\nTabuleiro de Batalha Naval N1:\n");

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

    // 3º navio - diagonal 
    int navio3_x = 0;
    int navio3_y = 0;
    int tamNavio3 = 4;

    for (int i = 0; i < tamNavio3; i++) {
        tabuleiro[navio3_y + i][navio3_x + i] = 3;
    }

  // 4º navio - diagonal 
  int navio4_x = TAM - 1;
  int navio4_y = 0;
  int tamNavio4 = 3;

  for (int i = 0; i < tamNavio4; i++) {
      tabuleiro[navio4_y + i][navio4_x - i] = 3;
  }

  // IMPRIMINDO O TABULEIRO FINAL
 
  printf("\nTabuleiro de Batalha Naval - Atualizado:\n");

  printf("   ");
  for (int i = 0; i < TAM; i++) {
      printf(" %c ", linha[i]);
  }
  printf("\n");

  // Imprime o tabuleiro com navios
  for (int i = 0; i < TAM; i++) {
      printf("%2d ", i + 1);
      for (int j = 0; j < TAM; j++) {
          printf(" %d ", tabuleiro[i][j]);
      }
      printf("\n");
  }

    return 0;
}

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

