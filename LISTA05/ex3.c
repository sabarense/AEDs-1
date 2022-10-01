#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

    printf("NUMEROS INTEIROS 1 A 10\n");

    int num = 1;

    do{
        printf("%i\n",num);
        num++;
    }while(num<=10);
}