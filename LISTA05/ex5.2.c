#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

    printf("NUMEROS INTEIROS\n");

    int num;

    printf("Digite o valor desejado:\n");
    scanf("%i",&num);

    int final;
    printf("Digite ate qual valor deve fazer a contagem:\n");
    scanf("%i",&final);

    do{
        printf("%i\n",num);
        num++;
    }while(num<=final);
}