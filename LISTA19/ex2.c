#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/*
Construa uma versão para o programa acima de forma que, além da principal, exista uma função para 
cada uma das seguintes funcionalidades: 
- Ler e retornar o mês lido [1..12]. Rejeitar leitura de valor inválido. 
- A partir de dois parâmetros - o arranjo e a chave da pesquisa, retornar o número de dias 
correspondente. 
- Escrever o resultado da pesquisa.
*/

//prototipos
int leiaMes();
int resultado(int mes, int mesesDoAno[]);


int main(){
    
    int mesesDoAno[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int mes = leiaMes();
    int numDias = resultado(mes, mesesDoAno);
    printf("%i", numDias);
}

int leiaMes(){

    int mes;
    bool erro;

    do{
        printf("Digite o mes:\n");
        scanf("%i", &mes);
        erro = mes < 0 || mes > 11;
        if(erro){
            printf("Valor invalido\n");
        }
    }while(erro);

    return mes;
}

int resultado(int mes, int mesesDoAno[]){

    int resultado = mesesDoAno[mes-1];
    return resultado;
}

