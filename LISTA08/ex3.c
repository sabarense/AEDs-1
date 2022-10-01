#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    printf("SOMA E MEDIA\n");

    float num;
    int cont = 0;
    float maiorNum = 0;
    float menorNum = 999;

    while(cont<10){
        printf("Digite o numero:\n");
        scanf("%f",&num);
        cont++;
        if(num>maiorNum){
            maiorNum = num;
        }else if(num<menorNum){
            menorNum = num;
        }
    }
    printf("O maior valor e:%f\n", maiorNum);
    printf("O menorvalor e:%f\n", menorNum);

}