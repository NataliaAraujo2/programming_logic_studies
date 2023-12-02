// Desvio Condicional Múltiplo
#include <stdio.h>

int main()
{
    int dia;
    printf("%s", "Digite o dia da semana \n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("%s", "\n Segunda-Feira");
        break;
    case 2:
        printf("%s", "\n Terça-Feira");
        break;
    case 3:
        printf("%s", "\n Quarta-Feira");
        break;
    case 4:
        printf("%s", "\n Quinta-Feira");
        break;
    case 5:
        printf("%s", "\n Sexta-Feira");
        break;
    case 6:
        printf("%s", "\n Sábado-Feira");
        break;
    case 7:
        printf("%s", "\n Domingo-Feira");
        break;
    default:
        printf("%s", "\n Opção Inválida!");
    }

}
