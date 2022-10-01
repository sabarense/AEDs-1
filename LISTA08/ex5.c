#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    printf("PESO IDEAL ATE ALTURA = 0\n");

    float altura,pesoIdeal;
    char genero;

    printf("Digite sua altura:[0 P/SAIR]\n");
    scanf("%f",&altura);

    while(altura != 0){

        printf("Digite seu genero:[M/F]\n");
        scanf(" %c",&genero);
        genero = toupper(genero);

        if(genero == 'M'){
            pesoIdeal = (72.7 * altura) - 58;
        }else if(genero == 'F'){
            pesoIdeal = (62.1 * altura) - 44.7;
        }
        printf("Peso ideal = %f\n",pesoIdeal);

        printf("Digite sua altura:[0 P/SAIR]\n");
        scanf("%f",&altura);
    }
}
