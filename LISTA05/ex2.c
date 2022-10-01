#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    printf("ANO BISSEXTO:\n");

    char continua;

    do {
        int ano;
        printf("Digite o ano a ser verificado:\n");
        scanf ("%i", &ano);

        if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
            printf("E um ano bissexto\n");
        }else{
            printf("Nao e bissexto\n");
        }
        printf("Deseja continuar?[S/N]\n");
        scanf(" %c",&continua);
        continua = toupper(continua);

    }while(continua == 'S' && continua != 'N');

}