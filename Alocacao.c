#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/*

int main (void)
{
    int tamanho=0;
    int *vetor;
    vetor = (int*)malloc(tamanho);
    printf("Digite o tamanho do vetor : \n");
    scanf("%d", &tamanho);
    
    
    
    
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = 0;
    }
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d", vetor[i]);
    }
    return 0;
}*/

///////////////////////////////////////////////////  1  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\/

void ler(int *vetor, int tamanho)
{
    system ("cls");
    printf("Digite %i numeros : \n", tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", vetor);
        vetor++;
    }
}


int main (void)
{
    int tamanho=0;
    int *vetor = (int*)malloc(tamanho);

    printf("Digite o tamanho do vetor : ");
    scanf("%d", &tamanho);

    ler(vetor, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("{%i}", *vetor);
        vetor++;
    }

    free(vetor);



    return 0;
}