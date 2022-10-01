#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("VOTACAO DE CHAPA\n");

    printf("0 - Sair do Programa\n");
    printf("1 - Chapa 1\n");
    printf("2 - Chapa 2\n");
    printf("3 - Voto em branco/nulo\n");

    bool erro1;
    bool erro2;
    int opcao;
    float chapa1 = 0;
    int somaChapa1 = 0;
    float chapa2 = 0;
    int somaChapa2 = 0;
    float votoBranco = 0;
    int somaBranco = 0;

    do {
        do {
            printf("Qual o seu voto?\n");
            scanf("%i", &opcao);
            erro1 = opcao != 0;
            erro2 = opcao != 0 && opcao != 1 && opcao != 2 && opcao != 3;
        } while(erro1);
        if(opcao == 1){
            chapa1++;
        }else if(opcao == 2){
            chapa2++;
        }else if(opcao == 3){
            votoBranco++;
        }else{
            printf("Valor invalido!\n");
        }
    }while(erro2);

    somaChapa1 = somaChapa1 + chapa1;
    somaChapa2 = somaChapa2 + chapa2;
    somaBranco = somaBranco + votoBranco;

    if(somaChapa1>somaChapa2 && somaChapa1>somaBranco)
    {
        printf("Chapa1 vencedora com %f dos votos!\n",somaChapa1);
    }else if(somaChapa2>somaChapa1 && somaChapa2>somaBranco){
        printf("Chapa2 Vencedora com %f dos votos!\n",somaChapa2);
    }else if(somaChapa1 == somaChapa2){
        printf("EMPATE!\n");
    }else if(somaBranco>somaChapa1 && somaBranco>chapa2){
        printf("Votacao anulada com %f dos votos brancos",somaBranco);
    }

}
