#include <stdio.h>
//////////////////////////////////////////////////////////////// 4 \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\/
/*
int main(void)
{
    float *pvetor;
    float vetor[10];
    pvetor = vetor;
    for (int i = 0; i < 10; i++)
    {
        printf("\n[%x]", &vetor[i]);
        printf("\nUtilizando pvetor [%x]", pvetor);
        pvetor++;
    }

    return 0;
}*/

//////////////////////////////////////////////////////////////// 5 \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\/
/*
int main(void)
{
    int vetor[5];
    int *pvetor = vetor;
    printf("Digite cinco valores inteiros \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", pvetor);
        pvetor++;
    }
    pvetor = vetor;
    for (int i = 0; i < 5; i++)
    {
        if (*pvetor % 2 == 0)
        {
                printf("\nO endereco do numero %i eh {%x}", *pvetor, pvetor);
        }
        pvetor++;
    }

    return 0;
}*/