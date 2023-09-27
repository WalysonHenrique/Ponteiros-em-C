#include <stdio.h>


int main (void)
{
int vetor[10];
int *pvetor;

pvetor = vetor;

printf("Variavel apontando para o endereco usando &vetor[0] : %x\nVariavel pvetor apontando endereco usando pvetor : %x", &vetor[0], pvetor);

//Teste
    return 0;
}
