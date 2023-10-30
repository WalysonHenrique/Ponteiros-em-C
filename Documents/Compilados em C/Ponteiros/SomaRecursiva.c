#include <stdio.h>
int soma(int *vetor, int x)
{
    if (x == 0)
    {
        return 0;
    }
    else 
    {
        return vetor[x - 1] + soma(vetor, x-1);
    }

}


int main (void)

{
    int vetor[5] = {1,2,3,4,5};
    int x = 5;
    printf("%d", soma(vetor, x));
    return 0;
}