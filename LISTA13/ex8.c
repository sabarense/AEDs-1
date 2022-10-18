#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//prototipos
void apresentacao();
int leAno();
void verificaAno(int ano);

int main()
{
    apresentacao();
    int le = leAno();
    verificaAno(le);    
}

void apresentacao()
{
    printf("ANO BISSEXTO\n");
}

int leAno()
{
    int ano;
    printf("Digite o ano:\n");
    scanf("%i",&ano);
    return ano;
}

void verificaAno(int ano)
{   
    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        printf("E um ano bissexto\n");
    }else{
        printf("Nao e bissexto\n");
    }
}
