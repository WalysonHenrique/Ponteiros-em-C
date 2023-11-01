#include <stdio.h>

int fatorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * fatorial(x - 1);
    }
}

int main(void)
{
    int x;
    printf("Digite um numero\n");
    scanf("%d", &x);
    printf("%i", fatorial(x));
    return 0;
}