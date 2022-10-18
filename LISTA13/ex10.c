#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//Calcular a potenciação a partir da base (real) e o expoente (natural). 

//prototipos
void apresentacao();
float leiaBase();
float leiaExpoente();
float potenciacao(float base, float expoente);

int main()
{
    apresentacao();
    float base = leiaBase();
    float expoente = leiaExpoente();
    float resultadoPotenciacao = potenciacao(base,expoente);
    printf("Base:%f Expoente:%f Resultado:%f",base,expoente,resultadoPotenciacao);
}

void apresentacao()
{
    printf("POTENCIACAO\n");
}

float leiaBase()
{   
    float base;
    printf("Digite a base:\n");
    scanf("%f",&base);
    return base;
}

float leiaExpoente()
{
    float expoente;
    printf("Digite o expoente:\n");
    scanf("%f",&expoente);
    return expoente;
}

float potenciacao(float base, float expoente)
{   
    int numero = 1;
    if(expoente == 0)
    {
        return 1;
    }

    for(int i = 1; i <= expoente; i++)
    {
        numero *= base;
    }
    
    return numero;
}

