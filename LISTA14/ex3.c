#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/*
Construa uma função que identifique o maior divisor de um número natural n menor que ele mesmo. 
Argumento da função: o número natural a ser verificado 
Valor gerado pela função: o maior divisor (exceto ele mesmo) do número recebido 
*/

//prototipos
void apresentacao();
int leValor();
int verificaValor(int numero);

int main()
{
    apresentacao();
    int numero = leValor();
    int verifica = verificaValor(numero);
    printf("O maior divisor de %i e = %i",numero,verifica);
}

void apresentacao()
{
    printf("MAIOR DIVISOR DE UM NUMERO NATURAL\n");
}

int leValor()
{
    int numero;
    printf("Digite um numero natural:\n");
    scanf("%i",&numero);
    return numero;
}

int verificaValor(int numero)
{   
    int resultado = 1;
    for (int i = 2; i < numero; i++)
    {
        if(numero % i == 0 ){
            resultado = i;
        }
    }
    return resultado;
}