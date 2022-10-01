#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("TIPOS DE TRIANGULO\n");

    int lado1;
    printf("Digite o primeiro lado do triangulo:\n");
    scanf("%i",&lado1);

    int lado2;
    printf("Digite o segundo lado do triangulo:\n");
    scanf("%i",&lado2);

    int lado3;
    printf("Digite o terceiro lado do triangulo:\n");
    scanf("%i",&lado3);

    if(lado1==lado2 && lado1==lado3)
        printf("Triangulo equilatero\n");
    else if(lado1==lado2 || lado1==lado3 || lado2==lado3){
        printf("Triangulo isosceles\n");
    }else
        printf("Triangulo escaleno");
}