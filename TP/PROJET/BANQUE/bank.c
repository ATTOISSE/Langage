#include "libraire.h"

int menu1(void)
{
  int choice;

  do
  {
      puts("MENU PRINCIPAL");
      puts("1. CREATION DE COMPTE");
      puts("2. TOUS DE COMPTE");
      puts("3.DETAIL DE COMPTE");
      puts("4.OPERATION SUR UN COMPTE");
      puts("5.TOUS LES OPERATION D'UN COMPTE");
      puts("6.TOUS LES OPERATION D'UN COMPTE A UNE DATE DONNE");
      puts("7.FERMER UN COMPTE");
      puts("8.QUITTER");
      puts("FAIRE VOTRE CHOIX");

      scanf("%d",&choice);
  }while(!(choice>=1 && choice<=8));
  return choice;

}

int menu2(void)
{
  int choice;

  do
  {
      puts("MENU");
      puts("1. VERSEMENT");
      puts("2. RETRAIT");
      puts("3.VIREMENT");
      puts("4.OPERATION SUR UN COMPTE");

      puts("FAIRE VOTRE CHOIX");

      scanf("%d",&choice);
  }while(!(choice>=1 && choice<=4));
  return choice;

}

