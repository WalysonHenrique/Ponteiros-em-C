#include <stdio.h>

int main(void)
{
    int valor;
    int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

    printf("Digite a quantia em R$ ");
    scanf("%i", &valor);
    
    
    //CÁLCULO DAS NOTAS
    do
    {
        if (valor - 100 >= 0)
        {
            valor = valor - 100;
            cem++;
        }
        else if (valor - 50 >= 0)
        {
            valor = valor - 50;
            cinquenta++;
        }
        else if (valor - 20 >= 0)
        {
            valor = valor - 20;
            vinte++;
        }
        else if (valor - 10 >= 0)
        {
            valor = valor - 10;
            dez++;
        }
        else if (valor - 5 >= 0)
        {
            valor = valor - 5;
            cinco++;
        }
        else if (valor - 2 >= 0)
        {
            valor = valor - 2;
            dois++;
        }
        else if (valor - 1 >= 0)
        {
            valor = valor - 1;
            um++;
        }
    } while (valor != 0);
    
    //EXIBIÇÃO
    printf("O troco foi recebido com :\n%i nota(s) de cem\n%i nota(s) de cinquenta\n%i nota(s) de vinte\n%i nota(s) de dez\n%i nota(s) de cinco\n%i nota(s) de dois\n%i moeda(s) de um real.", cem, cinquenta, vinte, dez, cinco, dois, um);

    printf("\n\nSaldo atual : R$ %i.", valor);

    return 0;
}