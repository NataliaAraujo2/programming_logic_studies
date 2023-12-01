#include <stdio.h>
// Flluxograma Composto
int main(void)
{
    int media;
        printf("%s", "Digite a média \n");
        scanf("%d", &media);

    if (media < 5)
        printf("%s", "Aluno Reprovado!");
    else
        printf("%s", "Aluno Aprovado!");
}