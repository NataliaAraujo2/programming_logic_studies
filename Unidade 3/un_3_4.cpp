#include <stdio.h>

// Conceito de repetição incondicional
main()

{
    int i, soma;
    // 1. for (i = 9; i >=3; i-=1)
    // 2. for (i = 0; i <=5 ; i++)
    soma = 0;

    for (i = 30; i >= 5; i -= 1)
    {
        if ((i % 3) == 0)
        {
            printf("\t%2d\n", i);
            soma += i;
        }

        // 1. if ((i % 3) == 0) //dividido por 3 com resto 0
    }

    printf("\t soma = %d\n", soma);
}