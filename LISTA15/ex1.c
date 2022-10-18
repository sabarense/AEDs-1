#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#define FLAG  0

/*
Calcular o peso Ideal de uma pessoa (masculino ou feminino). 
Projetar todas as funções necessárias para o programa. (Top Down ou Bottom Up) 
Leitura dos dados finalizada com flag: altura igual a zero. 
*/

//prototipos 
float leAltura();
char leSexo();
float calculoPesoIdeal(float altura, char sexo);


int main()
{
    float altura;
    char sexo;
    float pesoIdeal ;
    
    do{
        altura = leAltura();
        if(altura != FLAG){
            sexo = leSexo();
            pesoIdeal = calculoPesoIdeal(altura,sexo);
            printf("Peso ideal = %f\n", pesoIdeal);
        }
    }while(altura != FLAG);
}

float leAltura()
{
    float altura;
    bool erro;

    do{
        printf("Digite sua altura:\n");
        scanf("%f",&altura);
        erro = altura < 0;
        if(erro){
            printf("Altura invalida\n");
        }
    }while(erro);

    return altura;
}

char leSexo()
{
    char sexo;
    bool erro;

    do{
        printf("Digite seu sexo:[M/F]\n");
        scanf(" %c",&sexo);
        sexo = toupper(sexo);
        erro = sexo != 'M' && sexo != 'F';
        if(erro){
            printf("Sexo invalido\n");
        }
    }while(erro);

    return sexo;
}

float calculoPesoIdeal(float altura, char sexo)
{
    float pesoIdeal;

    if(sexo == 'M'){
        pesoIdeal = (72.7 * altura) - 58;
    }else{
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    return pesoIdeal;
}   
