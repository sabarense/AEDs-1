#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//Calcular o segundo maior valor entre três valores reais. 

//prototipo
void apresentacao();
float leValor();
float verificaValor();

int main()
{
    apresentacao();
    float verifica = verificaValor();
}

void apresentacao()
{
    printf("CALCULO DO SEGUNDO MAIOR VALOR\n");
}

float leValor()
{   
    float valor;
    printf("Digite o valor:\n");
    scanf("%f",&valor);    
    return valor;
}

float verificaValor()
{
    float valor;
    float maiorValor = 0;
    float segundoMaiorValor = 0;
    for(int i = 0; i < 3; i++)
    {
        valor = leValor();
        if(valor > maiorValor)
        {   
            segundoMaiorValor = maiorValor;
            maiorValor = valor;
        }else if(valor > segundoMaiorValor)
        {
            segundoMaiorValor = valor;
        }
    }
    printf("O segundo maior valor e:%f",segundoMaiorValor);
}