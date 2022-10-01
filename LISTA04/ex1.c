#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    printf("CALCULADORA\n");

    printf("1:Adicao\n");
    printf("2:Subtracao\n");
    printf("3:Multiplicacao\n");
    printf("4:Divisao\n");

    int opcao;

    printf("Digite o numero da operacao aritmetica desejada: ");
    scanf("%i", &opcao);

    float valor1,valor2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    switch(opcao)
    {
    case 1:
        printf("%2.f", valor1+valor2);
        break;

    case 2:
        printf("%2.f", valor1-valor2);
        break;

    case 3:
        printf("%2.f", valor1*valor2);
        break;

    case 4:
        printf("%2.f", valor1/valor2);
        break;

    default:
        printf("Valor invalido!");

    }