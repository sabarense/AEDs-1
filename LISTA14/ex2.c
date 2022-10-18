#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/*
Construa uma função que gere o enésimo termo Fibonacci.
Argumento da função: o valor de k, sendo k a posição do número Fibonacci a ser gerado
Valor gerado pela função: o número Fibonacci correspondente à posição k recebida
*/

// prototipos
void apresentacao();
int leValor();
int calculaFibonacci(int numero);

int main()
{
    apresentacao();
    int numero = leValor();
    int resultado = calculaFibonacci(numero);
    printf("Fibonacci de %i = %i",numero,resultado);
}

void apresentacao()
{
    printf("FIBONACCI\n");
}

int leValor()
{
    int numero;
    printf("Digite um valor natural:\n");
    scanf("%i", &numero);
    return numero;
}

int calculaFibonacci(int numero)
{
    int anterior = 0;
    int proximo = 1;
    int soma = 0;

    for(int i = 1; i < numero; i++){
        soma = proximo + anterior;
        anterior = proximo;
        proximo = soma;
    }
    return anterior;
}