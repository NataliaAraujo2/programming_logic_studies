// If Encadeado
#include <stdio.h>

int main(void)
{
    int media, faltas;

    printf("%s", "Digite a média:\n");
    scanf("%d", &media);
    printf("%s", "Digite as faltas:\n");
    scanf("%d", &faltas);

    if (media >= 5)
        if (faltas > 25)
            printf("%s", "Aluno Reprovado!\n");
        else
            printf("%s", "Aluno Aprovado!\n");
    else
        printf("%s", "Aluno Reprovado!\n");
}
