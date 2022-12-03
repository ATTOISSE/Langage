#include<stdio.h>
#include<string.h> /* ppour les modifications */

 typedef struct player
{
     signed char username[100];
    int hp;
    int mp;
}player;

/* typedef struct player player; cela signifie qu'on va remplacer player par player */

 /* ---------  VOIR LES POINTEUR -------------
  pour les fonctionnalite du pointeur on peut utiliser des fleche comme on peut utiliser des points
  eg: p->hp =100;*/
void create_player(player *p){


strcpy((*p).username,"papo");
(*p).hp = 100;
(*p).mp = 5;
}


/* ---------------------------------------------------*/


int main(void)

{

  /* ---------------pointeur------------------------------------*/
   player p1 = {"",0,0};
   create_player(&p1);
     printf("NOM DU JOUEUR : %s \n",p1.username);
   printf("pv : %d | pm : %d \n ",p1.hp,p1.mp);
    /* -----------------------

   struct player p1 ={ "attoisse",100,100 };
   printf("NOM DU JOUEUR : %s \n",p1.username);
   printf("pv : %d | pm : %d \n ",p1.hp,p1.mp);

   strcpy(p1.username,"fatano");
   p1.hp-=50;
printf("NOM DU JOUEUR : %s \n",p1.username);
   printf("pv : %d | pm : %d \n ",p1.hp,p1.mp);*/

   /* --- COUR DE POINTEUR ----*/

   int value=14;
   int * p = & value;
   printf("la valeur est %d et l'adresse est %p",value,p);


   return 0;
}
