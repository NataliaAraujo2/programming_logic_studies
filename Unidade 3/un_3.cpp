// Estruturas de Repetição - Conceito de Looping
#include <stdio.h>

int main()
{
    int x;
    printf("Quantas vezes tenho que repetir?");
    scanf("%d", &x);

    while (x > 0)
    {//isso será repetido
        printf("repetindo \n");
        x--;
    }// até aqui
    return 0;
}