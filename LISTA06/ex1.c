#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    printf("CALCULADORA WHILE + SWITCH\n");

    float valor1;
    float valor2;
    bool continua;
    int opcao;
    bool error;

    do
    {
        do
        {
            printf("0:Sair\n");
            printf("1:Adicao\n");
            printf("2:Subtracao\n");
            printf("3:Multiplicacao\n");
            printf("4:Divisao\n");
            
            printf("Digite o numero da operacao aritmetica desejada:\n");
            scanf("%i", &opcao);

            if(opcao == 0)
                return 0;
            
            error = error < 0 || error > 4;
        }
        while(error);

        printf("Digite o primeiro valor:\n");
        scanf("%f", &valor1);

        printf("Digite o segundo valor:\n");
        scanf("%f", &valor2);

        switch(opcao)
        {
            case 1:
                printf("O resultado e:%2.f\n", valor1+valor2);
                break;

            case 2:
                printf("O resultado e:%2.f\n", valor1-valor2);
                break;

            case 3:
                printf("O resultado e:%2.f\n", valor1*valor2);
                break;

            case 4:
                printf("O resultado e:%2.f\n", valor1/valor2);
                break;
        }

    }
    while(opcao!=0);
}
