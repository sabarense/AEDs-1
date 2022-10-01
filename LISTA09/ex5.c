#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    printf("Identificacao do perfil da turma\n\n");

    char genero;
    int idade=0;
    int alunos=0;
    int maisNova=9999;
    int maisVelha=0;
    int numMaioresIdade=0;
    int contador=0;
    float feminino = 0;
    float masculino = 0;
    bool erro;

    printf("Quantos alunos tem na sua turma?\n");
    scanf("%i",&alunos);


    while (contador < alunos){

        do {
            printf("Digite seu genero:[M/F]\n");
            scanf(" %c", &genero);
            genero = toupper(genero);
            erro = genero != 'M' && genero != 'F';
            if(genero == 'M'){
                masculino++;
            }else if(genero == 'F'){
                feminino++;
            }else{
                printf("Valor Invalido!\n");
            }

        }while(erro);

        do {
            printf("Digite sua idade:\n");
            scanf("%i",&idade);
            if(idade>maisVelha){
                maisVelha = idade;
            }else if(idade<maisNova){
                maisNova = idade;
            }
            erro = idade < 0 || idade > 90;

            if(idade >= 18 && idade < 90){
                numMaioresIdade++;
            }
        }while(erro);
        contador++;
    }
    float percentualHomem = 0;
    percentualHomem = masculino/(alunos)*100;
    float percentualMulher = 0;
    percentualMulher = feminino/(alunos)*100;
    numMaioresIdade = numMaioresIdade/(alunos)*100;

    printf("O percentual de homens e de: %f\n", percentualHomem);
    printf("O percentual de mulheres e de: %f\n", percentualMulher);
    printf("O percentual de alunos maiores de idade e de: %f\n", numMaioresIdade);
    printf("A pessoa mais velha tem: %i\n", maisVelha);
    printf("A pessoa mais nova tem: %i\n", maisNova);

}
