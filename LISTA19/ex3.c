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

int main(){

    float soma = 0;
    float media;
    int pessoasAbaixoMedia;
    int idade[5] = {19,18,18,19,19};

    for(int i = 0; i < strlen(idade); i++){
        printf("%zu\n", strlen(idade));
        soma++;
        printf("%i", idade[i]);
    }

}