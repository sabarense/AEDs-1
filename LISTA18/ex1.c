#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//Explique que informação está sendo apresentada na tela em cada instrução printf(...) abaixo: 

int main()
{
    int X = 10;
    printf("\n%i", X); // x = 10;
    printf("\n%p", &X); // endereço da memória onde X está alocado

    int *p1;
    p1 = &X; //ponteiro está recebendo o endereço de X
    printf("\n%p", p1); // printando o endereço de memória de X;
    printf("\n%i", *p1); // printando p1;
    printf("\n%p", &p1); // 

    int *p2;
    p2 = malloc(sizeof(int));
    *p2 = 11;
    printf("\n%p", p2); // printando o endereço de memória  para onde p2 aponta;
    printf("\n%i", *p2); // printando o valor para onde p2 aponta;
    printf("\n%p", &p2); // printando o endereço de p2
}

