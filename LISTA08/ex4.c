#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    printf("LEITURA DE N ATE 0 SER LIDO\n");

    int num;
    int cont = 0;
    int maiorNum = 0;
    int menorNum = 999;

    printf("Digite um valor:[0 p/sair]\n");
    scanf("%i",&num);

    while(num != 0){
        printf("Digite um valor:\n");
        scanf("%i",&num);
        if(num>maiorNum){
            maiorNum = num;
        }else if(num<menorNum){
            menorNum = num;
        }
    }
    printf("O maior valor e:%i\n", maiorNum);
    printf("O menor valor e:%i\n", menorNum);
}
