#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50

typedef struct
{
    char nome[50];
    char matricula[20];
    int idade;
} aluno;

aluno alunos[MAX];
// Cadastro

void Cadastro(int incrementCad)
{
    system("cls");
    printf("Cadastro Selecionado !\n");
    printf("Digite o nome do aluno: ");
    fgets(alunos[incrementCad].nome, 50, stdin);
    printf("Digite a matricula do aluno: ");
    fgets(alunos[incrementCad].matricula, 20, stdin);
    printf("Digite a idade do aluno: ");
    scanf("%i", &alunos[incrementCad].idade);
    system("cls");
}

void Listar(int qtdAlunos)
{
    short int verificar = 0;
    char searchMAt[20];
    int chooseList = 0;
    system("cls");
inicio:
    printf("Deseja listar por matricula : 1 \nOu todos os alunos : 2\n--->  ");
    scanf("%i", &chooseList);
    if (chooseList == 1 || chooseList == 2)
    {
        getchar();
        switch (chooseList)
        {
        case 1:
            printf("Listando todos os alunos ... \n");
            for (int i = 0; i < qtdAlunos; i++)
            {
                printf("Nome : %s\nMatricula : %s\n Idade : %i\n===================\n\n", alunos[i].nome, alunos[i].matricula, alunos[i].idade);
            }
            break;

        case 2:
            printf("Digite a matricula do aluno que deseja buscar : \n---> ");
            fgets(searchMAt, 20, stdin);
            for (int i = 0; i < qtdAlunos; i++)
            {
                if (strcmp(searchMAt, alunos[i].matricula) == 0)
                {
                    printf("\nAluno encontrado !!\n");
                    printf("Nome : %s\n", alunos[i].nome);
                    printf("Matricula : %s\n", alunos[i].matricula);
                    printf("Idade : %i\n\n", alunos[i].idade);
                    verificar = 1;
                }
            }
            if (verificar != 1)
            {
                printf("\nAluno nao encontrado.\n");
            }
        default:
            break;
        }
    }
    else
    {
        system("cls");
        printf("Digite um valor valido !! \n");
        goto inicio;
    }
}

int main(void)
{
    int incrementCad = 0;
    int choose = 0;
    do
    {
        printf("################# MENU #################\n\n########################################\n# 1. Cadastro                          #\n# 2. listar                            #\n# 3. Alterar                           #\n# 4. Excluir                           #\n# 5. Sair                              #\n########################################\n\n --> ");
        scanf("%i", &choose);
        getchar();
        switch (choose)
        {
        case 1:
            Cadastro(incrementCad);
            incrementCad++;
            break;

        case 2:
            Listar(incrementCad);

        default:
            break;
        }

    } while (choose != 5);
    return 0;
}