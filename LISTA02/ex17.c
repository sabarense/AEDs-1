#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main() {

    printf("SENHA\n");

    int senha = 4531;
    printf("Digite a senha valida:\n");
    scanf("%i",&senha);

    if(senha==4531){
        printf("Acesso permitido!\n");
    }else{
        printf("Acesso negado!");
    }
}