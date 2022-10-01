#include <stdio.h>

int main()
{
  int n,i,nfat;

  printf("Calculo do fatorial de um numero\n");

  printf("Digite um inteiro nao-negativo: ");
  scanf("%i", &n);

  nfat = 1;

  for (i = 2; i <= n; i++)
    {
      nfat = nfat * i;
    }

  printf("O valor de %d!= %d\n", n, nfat);

}