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
/*
typedef struct
{
    int dia;
    char mes[20];
    int ano;

}dataNasci;

typedef struct Dados_pessoais
{
    char nome[40];
    char cpf[11];
    dataNasci nascimento;


}tipo_dados;


void Cadastrar()
{
    tipo_dados dados;
    printf("Digite seu nome: \n");
    fgets(dados.nome, 40, stdin);



    printf("\nDigite seu cpf: ");
    fgets(dados.cpf, 11, stdin);



    printf("\nAgora o dia do seu nascimento: ");
    scanf("%d", &dados.nascimento.dia);
    getchar();
    printf("\nMes: ");
    fgets(dados.nascimento.mes, 20, stdin);
    printf("\nAno: ");
    scanf("%d", &dados.nascimento.ano);
}


void printar()
{
    system("cls");
    tipo_dados dados;
    printf("%s\n%s\n%i/%s/%i", dados.nome, dados.cpf, dados.nascimento.dia, dados.nascimento.mes, dados.nascimento.ano);
}




int main()
{
    

    
    Cadastrar();
    printar();




    return 0;
}*/