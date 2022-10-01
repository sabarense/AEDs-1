#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    printf("PERFIL DA TURMA\n");

    int idade,alunos;
    char continua ;
    char genero;
    int homem,mulher;
    int menorIdade = 999;
    int cont = 0;


    do {
        printf("Digite sua idade:\n");
        scanf("%i",&idade);
        if(idade<menorIdade){
            menorIdade = idade;
        }
        printf("Digite seu genero:[M/F]\n");
        scanf("% c",&genero);
        genero = toupper(genero);
        if(genero == 'M'){
            homem++;
        }else if(genero == 'F'){
            mulher++;
        }
        printf("Deseja continuar?:[S/N]\n");
        scanf("% c",&continua);
        alunos++;
    }while(continua == 'S' & continua != 'N');

    float mediaHomem = alunos / homem;
    float mediaMulher = alunos / mulher;

    printf("A pessoa mais nova da turma tem:%i\n",menorIdade);
    printf("A idade media dos homens e de:%i\n",mediaHomem);
    printf("A idade media das mulheres e de:%i\n",mediaMulher);
}