#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    printf("PAR OU IMPAR\n");

    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%i",&num);
    if(num % 2 == 0)//operador %
    {
        printf("Par");
    }
    else
        printf("Impar");
}