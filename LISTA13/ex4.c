#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//prototipos
void apresentacao();
float leiaBase();
float leiaAltura();
float leiaArea(float base, float altura);

int main()
{
    apresentacao();
    float base = leiaBase();
    float altura = leiaAltura();
    float area = leiaArea(base,altura);
    printf("AREA DO RETANGULO:%f",area);
}

void apresentacao()
{
    printf("AREA DE UM RETANGULO\n");
}

float leiaBase()
{
    float base;
    printf("Digite a base do retangulo:\n");
    scanf("%f",&base);
    return base;
}

float leiaAltura()
{
    float altura;
    printf("Digite a altura do retangulo:\n");
    scanf("%f",&altura);
    return altura;
}

float leiaArea(float base, float altura)
{
    float area = base * altura;
    return area;
}
