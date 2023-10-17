#include <stdio.h>
#include <stdlib.h>

int **criarM(int **matriz, int linhas, int colunas)
{
    matriz = (int **)malloc(linhas * sizeof(int *));



    for (int i = 0; i < colunas; i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }




    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = 0;
        }
        printf("\n");
    }











    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void liberarmemoria(int **matriz)
{
    free(matriz);
}

int main()
{
    int linhas, colunas;
    int **matriz;

    printf("Digite quantas linhas\n");
    scanf("%d", &linhas);
    printf("Digite quantas colunas\n");
    scanf("%d", &colunas);

    criarM(matriz, linhas, colunas);

    liberarmemoria(matriz);

    return 0;
}