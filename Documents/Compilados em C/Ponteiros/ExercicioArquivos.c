#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    float nota1, nota2, nota3, media;
}lista;



void cadastrar()
{
    lista notas;
    FILE *arquivo = fopen("C:/Users/20231stads005/Documents/Compilados em C/Ponteiros/Notas.txt", "a");
    printf("Digite as notas :");
    scanf("%f", &notas.nota1);
    scanf("%f", &notas.nota2);
    scanf("%f", &notas.nota3);
    notas.media = (notas.nota1+notas.nota2+notas.nota3)/3;
    fprintf(arquivo, "%.2f\n%.2f\n%.2f\n%.2f\n", notas.nota1, notas.nota2, notas.nota3, (notas.nota1 + notas.nota2 + notas.nota3)/3);
}


void ler()
{
    lista notas;
    FILE *arquivo = fopen("C:/Users/20231stads005/Documents/Compilados em C/Ponteiros/Notas.txt", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo nao encontrado");
    }
    else 
    {
        while(fscanf(arquivo, "%f\n%f\n%f\n%f", &notas.nota1, &notas.nota2, &notas.nota3, &notas.media)!=-1)
        {
            printf("%.2f\n%.2f\n%.2f\n%.2f\n", notas.nota1, notas.nota2, notas.nota3, (notas.nota1+notas.nota2+notas.nota3)/3);
        }
    }
}



int main(void)
{
    char escolha;
    printf("#######################################################\n################### c Cadastrar notas       ###########\n################### l Ler notar             ###########\n################### m Medias acima da media ###########\n");
    scanf("%c", &escolha);
    getchar();
    switch (escolha)
    {
    case 'c':
        cadastrar();
        break;

    case 'l':
        ler();

        break;
    default:
        break;
    }




    return 0;
}