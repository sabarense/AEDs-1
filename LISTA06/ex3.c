#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("SOMA DOS VALORES\n");

    float soma = 0;
    float numero = 0;
    int contador = 0;

    do
    {
        printf("Digite um numero real: ");
        scanf("%f", &numero);

        if(numero>0){
            soma = numero+soma;
            contador++;
        }

    }
    while(contador<=10);
    printf("A soma dos valores lidos e de: %2.f", soma);
}