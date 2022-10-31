#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
Construa uma versão recursiva para o cálculo do MDC. Para isto, busque identificar primeiro:
- o caso base = param2 =0 
- o caso indutivo param 1 = param 2 e o param2 = poaran1 %param2
*/

// prototipos
int leiaValor();
int calcMDCRecursivo(int valor1, int valor2);

int main()
{
    int lerValor1 = leiaValor();
    int lerValor2 = leiaValor();
    int calcularMDC = calcMDCRecursivo(lerValor1, lerValor2);
    printf("O maior divisor comum de %i e %i = %i", lerValor1, lerValor2, calcularMDC);
}

int leiaValor()
{
    int valor;
    printf("Digite um valor:\n");
    scanf("%i", &valor);
    return valor;
}

int calcMDCRecursivo(int parametro1, int parametro2)
{
    if (parametro2 == 0)
    {
        return parametro1;
    }
    else
    {
        int resultado = parametro1 % parametro2;
        return calcMDCRecursivo(parametro2, resultado);
    }
}

