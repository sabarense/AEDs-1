#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/*
Construa uma função que verifique se dois números naturais são primos entre si ou não. Argumentos da função (valores parametrizados): os dois números naturais a serem verificados
Valor gerado pela função: verdadeiro, se primos entre si, ou falso, caso contrário
*/

// prototipos
void apresentacao();
void verifica();
int leValor();


int main()
{
    apresentacao();
    verifica();

}

void apresentacao()
{
    printf("PRIMOS ENTRE SI\n");
}

int leValor()
{
    int numero;
    printf("Digite um valor natural:\n");
    scanf("%i", &numero);
    return numero;
}

void verifica()
{
    int valor1 = leValor();
    int valor2 = leValor();
    int menorNumero;
    bool primosEntreSi = true;
    float divisaoValor1, divisaoValor2;
   
    if (valor1 % 2 == 0 && valor2 % 2 == 0)
    {
       printf("Nao sao primos entre si");
    }
    else
    {
        if (valor1 < valor2)
        {
            menorNumero = valor1;
        }
        
        else
        {
            menorNumero = valor2;
        }

        for (int i = 2; i <= menorNumero; i++)
        {
            divisaoValor1 = valor1 % i;
            divisaoValor2 = valor2 % i;
            if (divisaoValor1 == divisaoValor2)
            {   
                printf("Nao sao primos entre si");
                i = menorNumero + 1;
                primosEntreSi = false;
            }
        }
        if (primosEntreSi)
        {
            printf("Sao primos entre si");
        }
    }
}