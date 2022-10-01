#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    printf("PESO IDELA C CARACTERE\n");

    char genero;
    printf("Informe seu genero:[M/F]\n");
    scanf("%c",&genero);
    genero = toupper(genero);

    float altura;
    printf("Informe sua altura:");
    scanf("%f",&altura);

    float pesoIdeal;
    if(genero=='M'){
        pesoIdeal = (72.7 * altura) - 58;
    }else if(genero=='F'){
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    printf("Peso ideal:%f",pesoIdeal);
    
}

