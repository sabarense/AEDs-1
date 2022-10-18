#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/*
Construa um vetor de tamanho igual a 12 que armazene, respectivamente, o número de dias previstos 
para cada um dos doze meses do ano – ignore anos bissextos. 
Em seguida, implemente a seguinte pesquisa: permitir ao usuário informar qual o mês do ano [1..12] e 
o seu programa deverá escrever na tela o número de dias previstos para aquele mês. 
O seu algoritmo deverá estar expresso em uma única função (a principal). 
*/

int main()
{
    printf("MESES DO ANO\n");

    int mesesDoAno[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int mesEscolhido;
    printf("Digite o mes desejado:\n");
    scanf("%i",&mesEscolhido);

    printf("Mes:%i Dias do mes:%i", mesEscolhido,mesesDoAno[]);


 
}