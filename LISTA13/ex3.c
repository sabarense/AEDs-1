#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//prototipos
void apresentacao();
float leiaRaio();
float leiaPerimetro(float raio);

int main()
{
    apresentacao();
    float raio = leiaRaio();
    float perimetro = leiaPerimetro(raio);
    printf("PERIMETRO: %f",perimetro);
}

void apresentacao()
{
    printf("PERIMETRO DO CIRCULO\n");
}

float leiaRaio()
{   
    float raio;
    printf("Digite o valor do raio:\n");
    scanf("%f",&raio);
    return raio;
}

float leiaPerimetro(float raio)
{
    const float PI = 3.14;
    float perimetro = 2 * PI * raio;
    return perimetro;
}