#include<stdio.h>

 typedef struct
{
    char fonction[23];
    int code;
    float salaire;
    int nbre_enfants;

}EMPLOYES;
int main (void)
{
    EMPLOYES E;
  int i,cpt=0;

  for(i=1;i<=3;i++)
  {
      puts("donner le code de l'employe");
      scanf("%d",&E.code);
      puts("donner le FONCTION de l'employe");
      scanf("%s",&E.fonction);
      puts("donner le NOMBRE D'ENFANT(s) de l'employe");
      scanf("%d",&E.nbre_enfants);
      puts("donner le SALAIRE de l'employe");
      scanf("%f",&E.salaire);
      system("pause");
      system("cls");

      printf("le code de l'employe est %d \n",E.code);
      printf("la fonction de l'employe est %s \n",E.fonction);
      printf("le nombre d'enfant(s) de l'employe est %d \n",E.nbre_enfants);
      printf("le salaire de l'employe est %.2f \n\n",E.salaire);
      if(E.nbre_enfants==0)
      {
          cpt++;
      }


  }
  if(E.nbre_enfants==0)
  printf("il y a %d employe(s) qui ont pas d'enfant \n",cpt);
  else{
    puts("chaque employes a au moins un enfant");
  }
  getch();
  return 0;
}
