#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main() {

    printf("QUANTOS DIAS TEM CADA MES DO ANO?\n\n");

    printf("1 Janeiro:\n");
    printf("2 Fevereiro:\n");
    printf("3 Marco:\n");
    printf("4 Abril:\n");
    printf("5 Maio:\n");
    printf("6 Junho:\n");
    printf("7 Julho:\n");
    printf("8 Agosto:\n");
    printf("9 Setembro:\n");
    printf("10 Outubro:\n");
    printf("11 Novembro:\n");
    printf("12 Dezembro:\n\n");

    int opcao;

    printf("Digite o numero do mes: ");
    scanf("%i", &opcao);

    int resultado;

    switch (opcao) {

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%i", resultado = 31);
            break;

        case 2:
            printf("%i", resultado = 28);
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("%i", resultado = 30);
            break;

        default:
            printf("Valor invalido!");

    }
}
