#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[30], telefone[15], email[50];
} Pessoa;

int main(void)
{
    Pessoa Cadastro;
    FILE *arquivo = fopen("C:/Users/20231stads005/Documents/Compilados em C/Ponteiros/TestandoArquivos.txt", "a");
    if (!arquivo)
    {
        printf("Arquivo nao encontrado");
    }
    else
    {
        fgets(Cadastro.nome, 30, stdin);
        fgets(Cadastro.telefone, 15, stdin);
        fgets(Cadastro.email, 50, stdin);
        fprintf(arquivo, "%s\n%s\n%s", Cadastro.nome, Cadastro.telefone, Cadastro.email);
    }
    fclose(arquivo);

    return 0;
}