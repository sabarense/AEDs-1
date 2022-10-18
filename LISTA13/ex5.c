#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//prototipos
void apresentacao();
float leiaValor();
void calculaMaior();

int main()
{
    apresentacao();
    calculaMaior();
}

void apresentacao()
{
    printf("Maior entre dois valores reais\n");
}

float leiaValor()
{
    float valor;
    printf("Digite um valor real:\n");
    scanf("%f",&valor);
    return valor;
}

void calculaMaior()
{   
    float valor1 = leiaValor(); 
    float valor2 = leiaValor();

    if( valor1 > valor2)
    {
        printf("O maior valor e:%f",valor1);
    }else{
        printf("O maior valor e:%f",valor2);
    }   
}

