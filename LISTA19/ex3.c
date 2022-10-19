#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/*
Construa um vetor que armazene a idade de cinco pessoas: a sua e a de mais quatro colegas. Em
seguida, calcule e escreva:
- a média das idades;
- a quantidade de pessoas com idade abaixo desta média.
O seu algoritmo deverá estar expresso em uma única função (a principal).
*/

int main()
{
    float soma = 0;
    float media;
    int pessoasAbaixoMedia = 0;
    int idade[] = {19, 18, 18, 19, 19};
    int tamIdade = (int)(sizeof(idade) / sizeof(idade[0]));

    for (int i = 0; i < tamIdade; i++)
    {
        soma += idade[i];
    }

    media = soma / tamIdade;

    for (int i = 0; i < tamIdade; i++)
    {
        if (idade[i] < media)
        {
            pessoasAbaixoMedia++;
        }
    }
    printf("Media:%f\n", media);
    printf("Pessoas abaixo da media:%i", pessoasAbaixoMedia);
}