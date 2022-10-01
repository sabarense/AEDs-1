#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    printf("Calculo do Peso Ideal\n");

    bool ERRO;
    float h;
    char novoCalculo;

    do
    {

        do
        {
            printf("Altura:\n");
            scanf("%f", &h);
            ERRO = h<0;
        }
        while(ERRO);

        char genero;
        do
        {
            printf("Genero [M/F]:\n");
            scanf(" %c", &genero);
            genero = toupper(genero);
            ERRO = (genero != 'M') && (genero != 'F');
        }
        while(ERRO);

        float pesoIdeal;
        if(genero == 'M') pesoIdeal = 72.7 * h - 58;
        else pesoIdeal = 62.1 * h - 44.7;


        printf("Peso Ideal = %f\n", pesoIdeal);

        printf("Deseja realizar um novo calculo? [S/N]:\n");
        scanf(" %c", &novoCalculo);
        novoCalculo = toupper(novoCalculo);

    }
    while(novoCalculo!='N');