#include <stdio.h>
/*//////////////////////////////// 1
void *troca(int n1, int n2, int *vetor)
{
    int num = vetor[n1];
    vetor[n1] = vetor[n2];
    vetor[n2] = num;
}






int main ()
{
    int *pont;
    int vetor[5];

    for (int i = 0; i < 5; i++)
    {
        vetor[i] = i;
    }
printf("Antes da troca\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }

    troca(0,1, vetor);
    pont = vetor;
    printf("\n\nDepois da troca\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *pont);
        pont++;
    }


    return 0;
}*/

/*//////////// 2
int soma(int *vetor)
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma = soma + vetor[i];
    }
    printf("A soma eh igual a : %i", soma);
}



int main()
{
    int vetor[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o vetor do %i elemento\n", i+1);
        scanf("%i", &vetor[i]);
    }
    soma(vetor);


    return 0;
}*/
///////////// 3
/*
int ordenar(int *vetor)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (vetor[j] > vetor[i])
            {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}


int main ()
{
 int vetor[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%i", &vetor[i]);
    }

    ordenar(vetor);

    for (int i = 0; i < 3; i++)
    {
        printf("%i", vetor[i]);
    }
    return 0;
}*/

/*
int copiar(int *vetor_a, int *vetor_b)
{
    for (int i = 0; i < 3; i++)
    {
        vetor_b[i] = vetor_a[i];
    }



}
int main ()
{
    int vetor_a[3], vetor_b[3];
    int *pont;
    for (int i = 0; i < 3; i++)
    {
        vetor_a[i] = i;
    }
    printf("Vetor A\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n",vetor_a[i]);
    }
    printf("Vetor B\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n",vetor_b[i]);
    }

    printf("Vetor B depois da funcao\n");
    copiar(vetor_a, vetor_b);

    pont = vetor_b;

    for (int i = 0; i < 3; i++)
    {
        printf("%i", *pont);
        pont++;
    }

    return 0;
}*/

///////////////////////////////// 5

void buscar(int x, int *vetor)
{
    int verificador = 0;
    for (int i = 0; i < 3; i++)
    {
        if (x == vetor[i])
        {
            verificador = 1;
        }
    }
    if (verificador == 1)
    {
        printf("Numero encontrado");
    }
    else
    {
        printf("numero nao encontrado");
    }
}

int main()
{
    int vetor[3];
    int buscarNum;
    for (int i = 0; i < 3; i++)
    {
        vetor[i] = i;
    }

    printf("digite o item a ser bustcado : ");
    scanf("%i", &buscar);
    buscar(buscarNum, vetor);
    return 0;
}