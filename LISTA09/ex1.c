#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    printf("Time preferido pela turma\n\n");
    float n;
    char time;

    do
    {
        printf("Quantos alunos tem sua turma?\n");
        scanf("%f", &n);

        if(n<=0 || n>70)
        {
            printf("Valor invalido\n");
        }
    }
    while(n<=0 || n>70);

    int i =0;
    float torcedoresC,torcedoresA,torcedoresO = 0;

    do
    {
        printf("Qual time voce torce?[A=atletico, C=cruzeiro, O=outros]\n");
        scanf(" %c", &time);
        time = toupper(time);

        if(time == 'A')
        {
            torcedoresA++;
            i++;
        }
        else if (time == 'C'){
            torcedoresC++;
            i++;
        }

        else if (time == 'O'){
            torcedoresO++;
            i++;
        }

        if(time != 'A' && time != 'C' && time != 'O') {
            printf("Time nao reconhecido\n");
        }

    }
    while(i<n);
    
    torcedoresC = (torcedoresC/n)*100;
    torcedoresA = (torcedoresA/n)*100;
    torcedoresO = (torcedoresO/n)*100;

    printf("O percentual de torcedores cruzeirenses e de:%2.f\n",torcedoresC);
    printf("O percentual de torcedores atleticanos e de:%2.f\n",torcedoresA);
    printf("O percentual de torcedores de outros times e de:%2.f\n",torcedoresO);
    
}
