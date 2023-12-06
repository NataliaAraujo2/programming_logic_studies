#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i;
    int num;
    int vetor[100];

    printf("Digite um número para iniciar o armazenamento\n");
    scanf("%d", &num);

    for (i = 0; i < 100; i++)
    {
        if (i == 0)
        {
            vetor[i] = num;
        }
        else
        {
            vetor[i] = num++;
        }

        printf("\nElemento [%i] = %d", i, num);
    }

    getch();
    return (0);
}