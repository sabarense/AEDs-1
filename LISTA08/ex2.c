#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    printf("SOMA E MEDIA\n");

    float num;
    int cont;
    float soma;

    while(cont<10){
        printf("Digite o numero:\n");
        scanf("%f",&num);
        soma = soma + num;
        cont++;
    }
    float media = soma / 10;
    printf("A soma dos valores e de:%f\n",soma);
    printf("A media dos valores e de:%f",media);
    
}