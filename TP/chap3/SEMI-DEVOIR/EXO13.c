
#include<stdio.h>

int main(){

  int somme=0, nbr, i;
do{
  printf(" Entrez un nombre: ");
  scanf("%d",&nbr);}
  while(nbr<=0);

  for(i = 1; i<nbr; ++i){
    if(nbr%i == 0){
      somme = somme + i;
    }
  }
  if(somme == nbr){
    printf("%d est un Nombre parfait",nbr);
  }
  else{
    printf(" %d n'est pas un Nombre parfait \n",nbr);
  }
  getch();
  return 0;
}
