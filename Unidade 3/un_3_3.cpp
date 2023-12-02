#include <stdio.h>

// conceito de repetição com teste no final
int main()
{
    int n, fat;

    printf("Entre o valor de n (0<=13)");
    scanf("%d", &n);

    fat = 1;

    do
    {
        fat = fat * n;
        n--;
    } while (n > 1);

    printf("resultado= %d\n", fat);
    return 0;
}