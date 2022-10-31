#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
Construa uma função que dobre o valor de uma variável paramétrica. A função não deverá retornar 
valor algum (função do tipo void)
*/

//prototipos
int leiaValor();
void dobraValor(int valor);

int main(){
    int valor = leiaValor();
    printf("O dobro de %i\n",valor);
    dobraValor(valor);
    printf("Eh igual a %i",valor);
}

int leiaValor(){
    int valor;
    printf("Digite o valor:\n");
    scanf("%i",&valor);
    return valor;
}

void dobraValor(int valor){
    valor = valor * 2;
}