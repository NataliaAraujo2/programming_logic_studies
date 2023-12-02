#include <stdio.h>
#include <string.h>

int main()
{
    char recalculation[4]; // Alterado para uma string de tamanho suficiente
    int valor, ano;

    do
    {
        printf("%s", "Qual o valor do veículo?\n");
        scanf("%d", &valor);

        printf("%s", "Qual o ano do veículo?\n");
        scanf("%d", &ano);

        float desc;
        float valorComDesconto;

        if (ano <= 2010)
        {
            desc = 0.12;
            printf("%s", "O desconto é 12%\n");
        }
        else
        {
            desc = 0.07;
            printf("%s", "O desconto é 7%\n");
        }

        valorComDesconto = valor * (1 - desc);
        printf("O valor do carro com desconto %.2f\n", valorComDesconto);

        printf("%s", "Deseja realizar um novo cálculo de desconto? S-Sim ou N-Não\n");
        scanf("%s", recalculation);

    } while (strcmp(recalculation, "S-Sim") == 0);

    return 0;
}