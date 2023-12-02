#include<stdio.h>

//Conceito de repetição com teste no início
// fatorial 4! 4*3*2*1 - Conceito matemático de fatorial

int main ()
{
    int n, i, fatorial;
    printf("Entre o valor de n (0<= n < 13): ");
    scanf("%d", &n);

    fatorial=1;
    i=1;

    while (i <= n)
    {
        fatorial=fatorial*i;
        i++;
    }
    printf("%d!=%d\n", n, fatorial);
    return 0;
    
}