#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/*Escrever os n primeiros numeros naturais primos, sendo n um valor lido - rejeitar a leitura de valor invalido
Lembre-se que um numero natural e dito primo quando tem apenas 2 divisores: 1 e ele mesmo.Lembre-se que 1 nao e primo
*/

int main()
{
    printf("Numeros naturais primos\n");

    int numero;
    int contador = 0;
    bool ehPrimo = true;
    bool erro;
    int primo = 2;

    do{
        printf("Digite a quantidade de termos:\n");
        scanf("%i",&numero);
        erro = numero <= 0;
        if(erro){
            printf("Valor invalido\n");
        }
    }while(erro);
    
    
    //controle da entrada
    while(contador < numero){
        //Verifica se primo
        for(int i = 2; i < primo; i++){
            if(primo % i == 0 && primo != 2){
                ehPrimo = false; 
                i = primo;
            }
        }
        //printa se primo
        if(ehPrimo){
            contador++;
            printf("O numero %i e primo\n",primo);
        }
        //atualiza valores
        primo++;
        ehPrimo = true;
    }
    
}   