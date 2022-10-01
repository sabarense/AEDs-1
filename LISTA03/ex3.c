#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    printf("CALCULADORA\n");

    printf("1 - ADICAO\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICACAO\n");
    printf("4 - DIVISAO\n");

    int opcao;
    printf("Digite a opcao desejada:\n");
    scanf("%i",&opcao);

    int num1;
    printf("Digite o primeiro operando:\n");
    scanf("%i",&num1);

    int num2;
    printf("Digite o segundo operando:\n");
    scanf("%i",&num2);


    switch (opcao) {
        case 1:
            printf("RESULTADO = %i", num1 + num2);
        break;
        case 2:
            printf("RESULTADO = %i", num1 - num2);
        break;
        case 3:
            printf("RESULTADO = %i", num1 * num2);
        break;
        case 4: num1 / num2;
            printf("RESULTADO = %i", num1 / num2);
    }

}
