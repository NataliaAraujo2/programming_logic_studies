#include <stdio.h>

int main()
{
    // Listar números de 0 a 100 dividindo em pares e impares

    for (int i = 0; i <= 100; i++)
    {
        if ((i % 2) == 0)
        {
            printf("%i - Par\n", i);
        }
        else
        {
            printf("%i - Ímpar\n", i);
        }
    }
}
