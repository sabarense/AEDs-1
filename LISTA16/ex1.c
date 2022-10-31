#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/*
Implemente e teste uma função recursiva para calcular o fatorial de um número natural qualquer, 
inclusive o zero. Lembre-se que, por definição, 0! é igual a 1. 
*/

//prototipos
int fatorial(int numero);


int main(){
    int leNumero = leiaNumero();
    int resultadoFat = fatorial(leNumero);
    printf("%i! = %i ", leNumero,resultadoFat);
}

int leiaNumero(){
    int numero;
    printf("Digite um numero natural:\n");
    scanf("%i",&numero);
    return numero;
}

int fatorial(int numero){
    int resultado;
    if(numero == 0){
        resultado = 1;
    }else{
        resultado = numero * fatorial(numero-1);
    }
    return resultado;
}


