#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){

  int tab[10], nbr, i;

  printf("Entrez le nombre � convertir: ");
  scanf("%d",&nbr);

  for(i=0; nbr > 0; i++)
  {
    tab[i] = nbr%2;
    nbr = nbr/2;

      printf("%d",i-1);

  }

  printf("\nLe nombre binaire est = ");

  for(i=i-1; i >= 0; i--)
  {
    printf("%d",tab[i]);
  }

  return 0;
}
