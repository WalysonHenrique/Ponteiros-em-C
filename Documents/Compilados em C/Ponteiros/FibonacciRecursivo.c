#include <stdio.h>


int Fibo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }



    else 
    {
        return Fibo(n - 1) + Fibo(n - 2); 
    }
}



int main (void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", Fibo(n));



    return 0;
}