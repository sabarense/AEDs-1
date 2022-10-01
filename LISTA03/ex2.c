#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    printf("CONDICOES PARA SER UM TRIANGULO\n");

    int ladoA;
    printf("Digite o valor do lado A:\n");
    scanf("%i",&ladoA);

    int ladoB;
    printf("Digite o valor do lado B:\n");
    scanf("%i",&ladoB);

    int ladoC;
    printf("Digite o valor do lado C:\n");
    scanf("%i",&ladoC);

    if(ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA){
        printf("Forma um triangulo!");
    }else{
        printf("Nao forma um triangulo!");
    }
}