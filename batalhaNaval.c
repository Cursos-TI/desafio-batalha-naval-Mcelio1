#include <stdio.h>

#define TAM 10 // Define o tamanho do tabuleiro

int main()
{
    // Tamanho do tabuleiro
    int tabuleiro[10][10] = {0}; // Declaração e inicialização do tabuleiro 10x10 com 0 (água)

    // Vetor com as letras das colunas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    printf("Tabuleiro de Batalha Naval - Play\n");

    // Imprime as letras das colunas no topo (A a J)
    printf("   ");
    for (int i = 0; i < 10; i++)
    {
        printf(" %c ", linha[i]);
    }
    printf("\n");

    // Imprime o tabuleiro com as linhas numeradas (1 a 10)
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1);

        // Imprime o conteúdo do tabuleiro (0 para água, 3 para partes dos navios)
        for (int j = 0; j < 10; j++)
        {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Definindo a posição do primeiro navio (horizontal)
    int navio1_x = 2;
    int navio1_y = 1;
    int tamanhoNavio1 = 3;

    // Coloca o navio 1 no tabuleiro (horizontal)
    for (int i = 0; i < tamanhoNavio1; i++)
    {
        tabuleiro[navio1_y][navio1_x + i] = 3;
    }

    // Definindo a posição do segundo naviovertical)
    int navio2_x = 5;
    int navio2_y = 3;
    int tamanhoNavio2 = 3;

    // Coloca o navio 2 no tabuleiro (vertical)
    for (int i = 0; i < tamanhoNavio2; i++)
    {
        tabuleiro[navio2_y + i][navio2_x] = 3;
    }

    // Exibe o tabuleiro com os navios posicionados (Nivel novato)
    printf("\n**Tabuleiro de Batalha Naval**\n");

    // Imprime novamente as letras das colunas no topo
    printf("   ");
    for (int i = 0; i < 10; i++)
    {
        printf(" %c ", linha[i]);
    }
    printf("\n");

    // Imprime o conteúdo atualizado do tabuleiro com os navios linha 1 a 10
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1);

        // Imprime o conteúdo do tabuleiro 0 para água, 3 para partes dos navios
        for (int j = 0; j < 10; j++)
        {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // 3º navio - diagonal
    int navio3_x = 0;
    int navio3_y = 0;
    int tamNavio3 = 4;

    for (int i = 0; i < tamNavio3; i++)
    {
        tabuleiro[navio3_y + i][navio3_x + i] = 3;
    }

    // 4º navio - diagonal
    int navio4_x = TAM - 1;
    int navio4_y = 0;
    int tamNavio4 = 3;

    for (int i = 0; i < tamNavio4; i++)
    {
        tabuleiro[navio4_y + i][navio4_x - i] = 3;
    }

    // IMPRIME O TABULEIRO FINAL (NIVEL AVENTUREIRO)
    printf("\n**Tabuleiro de Batalha Naval**\n");

    printf("   ");
    for (int i = 0; i < TAM; i++)
    {
        printf(" %c ", linha[i]);
    }
    printf("\n");

    // Imprime o tabuleiro com navios
    for (int i = 0; i < TAM; i++)
    {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAM; j++)
        {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Matrizes de Habilidade
    int habilidadesTabuleiro[TAM][TAM] = {0};

    // Habilidade Cone (3x5)
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}};

    // Habilidade Cruz (5x5)
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}};

    // Habilidade Octaedro (5x5)
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}};

    // Imprime posicionar o cone
    int found = 0;
    for (int i = 0; i <= TAM - 3; i++)
    { // -3 porque o cone tem 3 linhas
        for (int j = 0; j <= TAM - 5; j++)
        { // -5 porque o cone tem 5 colunas
            
            found = 1;
            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 5; y++)
                {
                    if (cone[x][y] == 1 && habilidadesTabuleiro[i + x][j + y] != 0)
                    {
                        found = 0;
                        break;
                    }
                }
                if (!found)
                    break;
            }

            if (found)
            {
                for (int x = 0; x < 3; x++)
                {
                    for (int y = 0; y < 5; y++)
                    {
                        if (cone[x][y] == 1)
                            habilidadesTabuleiro[i + x][j + y] = 1;
                    }
                }
                break; // Parou de procurar
            }
        }
        if (found)
            break;
    }

    // Imprime posicionar a cruz
    found = 0;
    for (int i = 0; i <= TAM - 5; i++)
    {
        for (int j = 0; j <= TAM - 5; j++)
        {
            found = 1;
            for (int x = 0; x < 5; x++)
            {
                for (int y = 0; y < 5; y++)
                {
                    if (cruz[x][y] == 1 && habilidadesTabuleiro[i + x][j + y] != 0)
                    {
                        found = 0;
                        break;
                    }
                }
                if (!found)
                    break;
            }

            if (found)
            {
                for (int x = 0; x < 5; x++)
                {
                    for (int y = 0; y < 5; y++)
                    {
                        if (cruz[x][y] == 1)
                            habilidadesTabuleiro[i + x][j + y] = 2; // Usa 2 pra Cruz
                    }
                }
                break;
            }
        }
        if (found)
            break;
    }

    // Imprime posicionar o octaedro
    found = 0;
    for (int i = 0; i <= TAM - 5; i++)
    {
        for (int j = 0; j <= TAM - 5; j++)
        {
            found = 1;
            for (int x = 0; x < 5; x++)
            {
                for (int y = 0; y < 5; y++)
                {
                    if (octaedro[x][y] == 1 && habilidadesTabuleiro[i + x][j + y] != 0)
                    {
                        found = 0;
                        break;
                    }
                }
                if (!found)
                    break;
            }

            if (found)
            {
                for (int x = 0; x < 5; x++)
                {
                    for (int y = 0; y < 5; y++)
                    {
                        if (octaedro[x][y] == 1)
                            habilidadesTabuleiro[i + x][j + y] = 3; // Usa 3 pra Octaedro
                    }
                }
                break;
            }
        }
        if (found)
            break;
    }

    // IMPRIME O TABULEIRO FINAL (NIVEL MESTRE)
    printf("\nTabuleiro de Batalha Naval- Com Habilidades\n");

    printf("   ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%2d ", i + 1);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++)
    {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAM; j++)
        {
            printf(" %d ", habilidadesTabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
