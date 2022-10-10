#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//prototipos
void apresentacao();
float leiaLado();
float calculaPerimetro(float lado);

int main()
{
    apresentacao();
    float lado = leiaLado();
    float perimetro = calculaPerimetro(lado);
    printf("PERIMETRO:%f", perimetro);
    //printf("PERIMETRO:%f", calculaPerimetro(leiaLado()));

}

void apresentacao()
{
    printf("PERIMETRO DO QUADRADO\n");
}

float leiaLado()
{
    float lado;
    printf("Digite o valor do lado do quadrado:\n");
    scanf("%f",&lado);
    return lado;
}

float calculaPerimetro(float lado)
{
    float perimetro = lado * 4;
    return perimetro;
}