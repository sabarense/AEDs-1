#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main() {

    printf("ANO BISSEXTO\n");

    int ano;
    printf("Digite o ano desejado:\n");
    scanf("%i",&ano);

    if(ano%4 == 0 & !(ano%100) == 0){
        printf("O ano e bissexto!");
    }else{
        printf("O ano nao e bissexto!");
    }

}