#include<stdio.h>

//Conceito de Contador

int main()
{
    int contador=0;

    do {
        printf("contador = %d\n", contador);
        contador +=1;
    } while (contador < 5);
   printf("Acabou !!!! \n");
    
}