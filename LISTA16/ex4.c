#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/*
Implemente e teste uma função que permita fazer a troca dos valores representados entre duas 
variáveis paramétricas do tipo real.
*/

//prototipos
float leiaValor();
void trocaValor(float valor1,float valor2);

int main(){
    float leValor1 = leiaValor();
    float leValor2 = leiaValor();
    trocaValor(leValor1,leValor2);
}

float leiaValor(){
    float valor;
    printf("Digite o valor:");
    scanf("%f",&valor);
    return valor;
}

void trocaValor(float valor1,float valor2){
    float auxiliar = valor1;
    valor1 = valor2;
    valor2 = auxiliar;
    printf("Valor 1:%2.f Valor 2:%2.f",valor1,valor2);
}



