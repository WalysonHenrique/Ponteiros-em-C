#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[30], carro[30], cep[30], filme[30], animal[30];
} Pessoa;

void Escrever(char *arquivo)
{
    Pessoa Cadastro;
    
    if (!arquivo)
    {
        printf("Arquivo nao encontrado");
    }
    else
    {
        printf("Nome com a letra B : ");
        fgets(Cadastro.nome, 30, stdin);
        printf("Carro com a letra B : ");
        fgets(Cadastro.carro, 30, stdin);
        printf("Cep com a letra B : ");
        fgets(Cadastro.cep, 30, stdin);
        printf("Filme com a letra B : ");
        fgets(Cadastro.filme, 30, stdin);
        printf("Animal com a letra B : ");
        fgets(Cadastro.animal, 30, stdin);
        fprintf(arquivo, "%s\n%s\n%s\n%s\n%s", Cadastro.nome, Cadastro.carro, Cadastro.cep, Cadastro.filme, Cadastro.animal);
    }
    fclose(arquivo);

}

void Ler()
{
    FILE *arquivo = fopen("C:/Users/20231stads005/Documents/Compilados em C/Ponteiros/B.txt", "r");
    Pessoa a;
    if (arquivo == NULL)
    {
        printf("Arquivo nao encontrado");
    }
    else {
        while(fscanf(arquivo, "%s%s%s%s%s", a.nome, a.carro, a.cep, a.filme, a.animal)!= -1)
        {
            printf("%s\n%s\n%s\n%s\n%s", a.nome, a.carro, a.cep, a.filme, a.animal);
        }
    }
}

int main(void)
{
    Ler();
    return 0;
}