#include <stdio.h>
#include <stdlib.h>

int **alocacaoDeMatriz(int **matriz, int l, int c)
{

    matriz = (int **)malloc(l * sizeof(int *));



    for (int i = 0; i < c; i++)
    {
        matriz[i] = (int *)malloc(c * sizeof(int));
    }


    return matriz;


}



void **imprimeMatriz(int **matriz, int l, int c)
{
/*
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz[i][j] = 0;
        }
    }
   

*/


for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz[i][j] = 0;
        }
    }




    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", matriz[i][j]);
        }
      printf("\n");
    }
    
}










void limpaMatriz(int **matriz)
{
    free(matriz);
}

int main()
{
    int **matriz;
    int l, c;

    printf("informe a quantidade de linhas: \n");
    scanf("%d", &l);
    printf("Informe a quantidade de colunas: \n");
    scanf("%d", &c);

    alocacaoDeMatriz(matriz, l, c);
    matriz = alocacaoDeMatriz(matriz, l, c);
    imprimeMatriz(matriz, l, c);

    return 0;
}