#include <stdio.h>

int main2()
{
    int media, faltas;
    printf("%s", "Digite a média");
    scanf("%d", &media);
    printf("%s", "Digite o número de faltas");
    scanf("%d", &faltas);
//Fluxograma Simples
    if (media >= 5)
        if (faltas <= 25)
            printf("%s", "\n Aluno Aprovado");
        else
            printf("%s", "\n Aluno Reprovado");
}
