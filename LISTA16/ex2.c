#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/*
Implemente e teste uma função recursiva para o cálculo da exponenciação, em que a base é um número 
real e o expoente um número natural, inclusive o zero. Lembre-se que, por definição, qualquer número 
elevado a zero é igual a 1. 
*/

// prototipos
float leiaBase();
int leiaExpoente();
float calculoExponenciacao(float base, int expoente);

int main()
{
    float leBase = leiaBase();
    int leExpoente = leiaExpoente();
    float calculaExp = calculoExponenciacao(leBase, leExpoente);
    printf("%.2f elevado a %i = %f", leBase, leExpoente, calculaExp);
}

float leiaBase()
{
    float base;
    printf("Digite um valor real para base:\n");
    scanf("%f", &base);
    return base;
}
int leiaExpoente()
{
    int expoente;
    printf("Digite um valor natural para expoente:\n");
    scanf("%i", &expoente);
    return expoente;
}
float calculoExponenciacao(float base, int expoente)
{
    int resultado;
    int numero = 1;
    if (expoente == 0) {
        resultado = 1;
    }else{
        for(int i = 1; i <= expoente; i++)
        {
            numero *= base;
        }
        resultado = numero;
    }
     return resultado;
}
