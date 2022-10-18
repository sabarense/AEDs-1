#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//prototipos
void apresentacao();
int leiaValor();
bool ehPar(int numero);

int main()
{
    apresentacao();
    int valor = leiaValor();
    int verifica = ehPar(valor);
    printf("O numero %i e par? %i",valor,verifica);
}

void apresentacao()
{
    printf("INTEIRO PAR OU IMPAR\n");
}

int leiaValor()
{
    int numero;
    printf("Digite um valor inteiro:\n");
    scanf("%i", &numero);
    return numero;
}

bool ehPar(int numero)
{   
    bool ehPar = false;
    if(numero % 2 == 0){
        ehPar = true;
    }
    return ehPar;
}
