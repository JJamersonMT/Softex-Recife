#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int contador, i, alteraValor, totalValores[10];
  printf("informe 10 valores :\n");
  for (i = 0; i < 10; i++) 
  {
    scanf("%d", &totalValores[i]);
  }
  printf("--------------------------------------------------");
  printf("\nValores desordenados:\n");
  for (i = 0; i < 10; i++) 
  {
    printf("%d\t", totalValores[i]);
  }
  // Início do BubbleSort:
  for (contador = 1; contador < 10; contador++)
  {
    for (i = 0; i < 10 - 1; i++)
    {
      if (totalValores[i] > totalValores[i + 1]) 
      {
         alteraValor= totalValores[i];
        totalValores[i] = totalValor[i + 1];
        totalValores[i + 1] = alteraValor;
      }
    }
  }
  // Fim do BubbleSort
  printf("\n-----------------------------------------------");
  printf("\nValores em ordem crescente:\n");
  for (i = 0; i < 10; i++) 
  {
    printf("%d\t", totalValores[i]);
  }
  return 0;
}

