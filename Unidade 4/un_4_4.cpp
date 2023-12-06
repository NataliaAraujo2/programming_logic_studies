#include <stdio.h>
#include <conio.h>

int main(void)
{
    int matriz[2][2], i, j;
    printf("Digite valor para os Elementos de sua matriz");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            printf("\nElemento [%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    printf("\n********************Saída de Dados***********************\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            printf("\nElemento[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    getch();
    return (0);
}