#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    printf("NOTA OBTIDA\n");

    float nota;
    int alunos;
    float soma = 0;
    float maiorNota=INT_MIN,menorNota=INT_MAX,segundaMenorNota=INT_MAX;

    do {
        printf("Digite sua nota:\n");
        scanf("%f",&nota);
        soma = soma + nota;
        if(nota > maiorNota){
            maiorNota = nota;
        }
        if(nota < menorNota){
            segundaMenorNota = menorNota;
            menorNota = nota;
        }
        alunos++;
    }while(alunos<10);

    float media = soma / alunos;
    printf("A media da turma e:%f\n",media);
    printf("A maior nota da turma e:%f\n",maiorNota);
    printf("A menor nota da turma e:%f\n",menorNota);
    printf("A 2 menor nota da turma e:%f\n",segundaMenorNota);
    
}