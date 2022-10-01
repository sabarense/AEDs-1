#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{

    int a;
    printf("Digite o primeiro numero:\n");
    scanf("%i",&a);

    int b;
    printf("Digite o segundo numero:\n");
    scanf("%i",&b);

    int c;
    printf("Digite o terceiro numero:\n");
    scanf("%i",&c);

    if(a > b && a > c){
        printf("O maior numero e:%i", a);
    }else if(b > a && b>c){
        printf("O maior numero e:%i", b);
    }else{
        printf("O maior numero e:%i", c);
    }
}