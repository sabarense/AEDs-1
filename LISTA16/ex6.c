#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//prototipos
int leiaNatural();
int somaNatural(int numero1, int numero2);


int main(){

    int lerNatural1 = leiaNatural();
    int lerNatural2 = leiaNatural();
    int somarNatural = somaNatural(lerNatural1,lerNatural2);
    printf("Soma = %i", somarNatural);

}

int leiaNatural(){
    int numero;
    bool erro;
    do{
        printf("Digite um valor natural[0 INCLUSO]:\n");
        scanf("%i",&numero);
        erro = numero < 0;
        if(erro){
            printf("Valores negativos nao sao aceitos!\n");
        }
    }while(erro);
    return numero;
}

int somaNatural(int numero1, int numero2){
    int resultado = 0;
    resultado = numero1+numero2;
    return resultado;
}
