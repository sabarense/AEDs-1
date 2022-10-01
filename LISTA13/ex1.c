#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//prototipo das funcoes
void apresentacao();
float leiaValor();
float somaValores(float a, float b);
void escreva(float soma);

int main()
{
    apresentacao();
    float a = leiaValor();
    float b = leiaValor();
    float soma = 0;
    soma = somaValores(a,b);
    escreva(soma);
}

void apresentacao()
{
    printf("Soma de dois valores\n");
}

float leiaValor()
{
    float valor;

    printf("Digite um valor:\n");
    scanf("%f", &valor);
    return valor;
}

float somaValores(float a, float b)
{
    float soma = a+b;
    return soma;

}

void escreva(float soma)
{
    printf("Soma = %f", soma);
}