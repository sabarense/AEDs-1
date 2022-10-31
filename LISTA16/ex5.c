#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/*
Construa uma função que receba duas variáveis e “zere” os valores nelas representados. 
*/

//prototipos
int leiaVariavel();
int recebaVariavel(int variavel1, int variavel2);

int main(){
    int leVariavel1 = leiaVariavel();
    int leVariavel2 = leiaVariavel();
    int recebeVariavel = recebaVariavel(leVariavel1,leVariavel2);
}

int leiaVariavel(){
    int variavel;
    printf("Digite a variavel:");
    scanf("%i",&variavel);
    return variavel;
}

int recebaVariavel(int variavel1, int variavel2){
    while(variavel1>0){
        variavel1--;
    }
    while(variavel2>0){
        variavel2--;
    }
    printf("variavel1 = %i variavel2 = %i",variavel1,variavel2);
}