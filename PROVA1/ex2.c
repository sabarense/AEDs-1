#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#define FLAG 0

/*
Uma empresa deseja aprimorar sua politica de salarios. Para isso, deseja saber:
- o numero de funcionarios com salario igual ao salario minimo
- o maior salario praticado na empresa
A leitura dos salarios dos funcionarios devera ser interrompida quando for lido um salario igual a 0
O valor do salario minimo tambem devera ser um valor lido
Rejeitar a leitura de valores invalidos
*/

int main()
{

    bool erro;
    float salario;
    float maiorSalario = 0;
    float salarioMin;
    int funcionarioSalarioMin = 0;

    do
    {
        printf("Digite o salario minimo:\n");
        scanf("%f", &salarioMin);
        erro = salarioMin <= 0;
        if (erro)
        {
            printf("Valor invalido\n");
        }
    } while (erro);


    do{
        printf("Digite o salario:\n");
        scanf("%f",&salario);
        erro = salario <= 0;
        if(erro){
            printf("Valor invalido\n");
        }
    }while(erro);

    while(salario != FLAG){
        if(salario>maiorSalario){
            maiorSalario = salario;
        }
        if(salario == salarioMin){
            funcionarioSalarioMin++;
        }

        printf("Digite o salario:\n");
        scanf("%f",&salario);
    }

    /*do
    {

        do{
            printf("Digite seu salario:\n");
            scanf("%f", &salario);
            erro = (salario < 0);
        }while(erro);
        
         if (salario == salarioMin)
        {
            funcionarioSalarioMin++;
        }
        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }



    } while (salario != FLAG);
    */


    printf(" %i funcionarios recebem o salario minimo\n", funcionarioSalarioMin);
    printf(" O maior salario e de: %f", maiorSalario);
}