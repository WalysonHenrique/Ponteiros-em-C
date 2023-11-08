#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void ler()
{
    int quantidadeLetras = 0;
    char letra;
    FILE *arquivo = fopen("C:/Users/20231stads005/Documents/Compilados em C/Ponteiros/Arquivogigante.txt", "r");
    if (arquivo == NULL)
    {
        printf("Arquivo nao encontrado");
    }
    else
        {
            while ((letra = fgetc(arquivo)) != EOF) 
            {
                if (tolower(letra) == 'a' || tolower(letra) == 'e' || tolower(letra) == 'i' || tolower(letra) == 'o' ||tolower(letra) == 'u')
                {
                    quantidadeLetras++;
                }
                printf("%c", letra);
            }
            printf("\nForam encontradas %i vogais no arquivo", quantidadeLetras);
        }
}



void criptografar()
{
    char letra;
    FILE *arquivo = fopen("C:/Users/20231stads005/Documents/Compilados em C/Ponteiros/Arquivogigante.txt", "a");
     if (arquivo == NULL)
    {
        printf("Arquivo nao encontrado");
    }
    else
        {
            while ((letra = fgetc(arquivo)) != EOF) 
            {
                if (tolower(letra) == 'z')
                {
                    fprintf(arquivo, "%c" ,'p');
                }
            }
        
        }
    fclose(arquivo);
}


int main(void)
{
    //ler();

    printf("\n\n");
    criptografar(); 
    return 0;
}