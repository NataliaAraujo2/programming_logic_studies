#include<stdio.h>

//Conceito de Acumulador
int main()
{
    int acumulador = 0;
    int contador = 0;
    int y = 0;

    do
    {
        printf("valor=");
        scanf("%d", &y);
        acumulador=acumulador+y; // variável que acúmula os valores digitados
        contador++; // Variável que efetua a contagem
    } while (contador < 3);

    printf("Acumulamos %d", acumulador);
    
}