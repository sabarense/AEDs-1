#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

// prototipos
void apresentacao();
int leValor();
int calculaFat(int numero);

int main()
{
    apresentacao();
    int valor = leValor();
    int calcula = calculaFat(valor);
    printf("O fatorial de !%i e igual a = %i",valor, calcula);
}

void apresentacao()
{
    printf("FATORIAL\n");
}

int leValor()
{
    int numero;
    printf("Digite um numero natural:\n");
    scanf("%i", &numero);
    return numero;
}

int calculaFat(int numero)
{
    int nfat = 1;
    for (int i = 2; i <= numero; i++)
    {
        nfat = nfat * i;
    }
    return nfat;
}
