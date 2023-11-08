#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    float nota1, nota2, nota3, media;
} lista;

void cadastrar()
{
    system("cls");
    lista notas;
    FILE *arquivo = fopen("C:/Users/20231stads005/Documents/Compilados em C/Ponteiros/Notas.txt", "a");
    printf("Digite as notas :");
    scanf("%f", &notas.nota1);
    scanf("%f", &notas.nota2);
    scanf("%f", &notas.nota3);
    getchar();
    notas.media = (notas.nota1 + notas.nota2 + notas.nota3) / 3;
    fprintf(arquivo, "%.2f\n%.2f\n%.2f\n%.2f\n", notas.nota1, notas.nota2, notas.nota3, (notas.nota1 + notas.nota2 + notas.nota3) / 3);
    fclose(arquivo);
}

void ler()
{
    system("cls");
    lista notas;

    FILE *arquivo = fopen("C:/Users/20231stads005/Documents/Compilados em C/Ponteiros/Notas.txt", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo nao encontrado");
    }
    else
    {
        while (fscanf(arquivo, "%f\n%f\n%f\n%f", &notas.nota1, &notas.nota2, &notas.nota3, &notas.media) != -1)
        {
            printf("%.2f\n%.2f\n%.2f\n%.2f\n", notas.nota1, notas.nota2, notas.nota3, (notas.nota1 + notas.nota2 + notas.nota3) / 3);
        }
    }
    fclose(arquivo);
}

float media()
{
    system("cls");
    lista notas;
    float mediaMedias;
    float somaMedias;
    int contador = 0;
    FILE *arquivo = fopen("C:/Users/20231stads005/Documents/Compilados em C/Ponteiros/Notas.txt", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo nao encontrado");
    }
    else
    {
        while (fscanf(arquivo, "%f\n%f\n%f\n%f", &notas.nota1, &notas.nota2, &notas.nota3, &notas.media) != -1)
        {
            somaMedias += notas.media;
            contador++;
        }
    }
    mediaMedias = somaMedias / contador;
    printf("%.2f", mediaMedias);
    return mediaMedias;
}

void limpar()
{
    FILE *arquivo = fopen("C:/Users/20231stads005/Documents/Compilados em C/Ponteiros/Notas.txt", "w");
    fclose(arquivo);
}

void mediaAcima()
{
    system("cls");
    lista notas;
    float mediaMedias = media();
    FILE *arquivo = fopen("C:/Users/20231stads005/Documents/Compilados em C/Ponteiros/Notas.txt", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo nao encontrado");
    }
    else
    {
        while (fscanf(arquivo, "%f\n%f\n%f\n%f", &notas.nota1, &notas.nota2, &notas.nota3, &notas.media) != -1)
        {
            if (notas.media > mediaMedias)
            {
                printf("media acima da media das medias %.2f", notas.media);
            }
        }
    }
    fclose(arquivo);
}

int main(void)
{

    char escolha;
    do
    {
        printf("\n#######################################################\n################### c Cadastrar notas       ###########\n################### r Ler notar             ###########\n################### m Media das medias ###########\n");
        scanf("%c", &escolha);
        getchar();
        switch (escolha)
        {
        case 'c':
            cadastrar();
            break;

        case 'r':
            ler();
            break;

        case 'm':
            media();
            break;

        case 'l':
            limpar();
            break;

        case '+':
            mediaAcima();
            break;
        case 's':
        break;

        default:
        printf("Caracter invalido, tente novamente");
            break;
        }

    } while (escolha != 's');

    return 0;
}