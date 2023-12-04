#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i;
    float num[5];
    // declarando e inicializando o vetor notas
    printf("Exibindo os valores do vetor \n\n");

    for (i = 0; i <= 4; i++)
    {
        printf("Digite um número\n");
        scanf("%f", &num[i]);
    }

    for (i = 0; i <= 4; i++)
    {
        printf("%f\n", num[i]);
    }

    getch();
    return 0;
}