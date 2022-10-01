#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("PAR OU IMPAR\n");

    int contador = 0;
    int numero;
    int par = 0;
    int impar = 0;

    do
    {
        printf("Digite um numero inteiro: ");
        scanf("%i", &numero);
        if(numero % 2 == 0){
          par++;
        }else{
          impar++;
        }
          contador++;
    }
    while(contador<=10);

    printf("VALORES PARES:%i \n",par );
    printf("VALORES IMPARES:%i \n",impar );
}