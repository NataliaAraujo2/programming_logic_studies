#include <stdio.h>

int main()
{

    int codDaCidade, qtddTotalAcidentes, numero, qtddCidades;
    int qtddCidades2000 = 0;
    int soma = 0;
    int media = 0;
    int somaMenos2000 = 0;
    int mediaMenos2000 = 0;
    int qtddVeiculosPasseio = 0;
    int menor_indice_acidentes = 0;
    int maior_indice_acidentes = 0;
    int codDaCidadeMenor = 0;
    int codDaCidadeMaior = 0;

    do
    {
        printf("Insira o Codigo da Cidade: ");
        scanf("%d", &codDaCidade);
        printf("Insira numero veiculos de passeio: ");
        scanf("%d", &qtddVeiculosPasseio);
        printf("Insira numero acidentes: ");
        scanf("%d", &qtddTotalAcidentes);

        // Maior e menor índice inicial
        if (qtddTotalAcidentes > maior_indice_acidentes || maior_indice_acidentes == 0)
        {
            codDaCidadeMaior = codDaCidade;
            maior_indice_acidentes = qtddTotalAcidentes;
        }

        if (qtddTotalAcidentes < menor_indice_acidentes || menor_indice_acidentes == 0)
        {
            codDaCidadeMenor = codDaCidade;
            menor_indice_acidentes = qtddTotalAcidentes;
        }

        // Número total de cidades
        qtddCidades++;
        // Soma de veículos
        soma += qtddVeiculosPasseio;
        // Média de Vaículos de Passeio
        media = soma / qtddCidades;

        // Média acidentes nas cidades com menos de 2000 veiculos
        if (qtddVeiculosPasseio < 2000)
        {
            qtddCidades2000+=1;
            somaMenos2000 += qtddTotalAcidentes;
            
        }
        mediaMenos2000 = somaMenos2000 / qtddCidades2000;

        printf("Há dados de mais alguma cidade para acrescentar? 1 = Sim 2 = Não");
        scanf("%d", &numero);
    } while (numero == 1);

    printf("\n O maior índice de acidentes pertence a cidade %i.", codDaCidadeMaior);
    printf("Que possui índice %i de acidentes de trânsito\n", maior_indice_acidentes);
    printf("\n O menor índice de acidentes pertence a cidade %i.", codDaCidadeMenor);
    printf("Que possui índice %i de acidentes de trânsito\n", menor_indice_acidentes);
    printf("A média de veículos das cidades participantes do estudo é %i\n", media);
    printf("A média de acidentes de trânsito nas cidades com menos de 2000 Veículos de Passeio é %i\n", mediaMenos2000);
    printf("\n********************************\n");
    printf("\n%i\n", codDaCidadeMaior);
    printf("\n%i\n", maior_indice_acidentes);
    printf("\n%i\n", codDaCidadeMenor);
    printf("\n%i\n", menor_indice_acidentes);
    printf("\n%i\n", qtddCidades);
    printf("\n%i\n", soma);
    printf("\n%i\n", media);
    printf("\n%i\n", qtddCidades2000);
    printf("\n%i\n", somaMenos2000);
    printf("\n%i\n", mediaMenos2000);

    return 0;
}
