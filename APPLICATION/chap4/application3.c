#include<stdio.h>
#define VIDER fflush(stdin);
struct DATE
{
    int jour;
    int mois;
    int annee;
};

struct ETUDIANT
{
    char nom[25];
    char prenom [30];
    float moy;
    struct DATE D;
};

main()

{

    struct ETUDIANT E;
    int i;
    float max;

    for(i=1; i<=3; i++)
    {
        printf("ETUDIANT : %d \n",i);
        puts("donner un nom");
        gets(E.nom);
        puts("donner un prenom");
        gets(E.prenom);
        VIDER
          do
                {
                    puts("donner un moyenne");
                    scanf("%f",&E.moy);
                }
                while(E.moy<0 || E.moy>20);


                do
                {
                    puts("donner le jour de naissance");
                    scanf("%d",&E.D.jour);
                }
                while(E.D.jour<1 || E.D.jour>31);

                do
                {
                    puts("donner le MOIS de naissance");
                    scanf("%d",&E.D.mois);
                }
                while(E.D.mois<1 || E.D.mois>12);

                do
                {
                    puts("donner l annee de naissance");
                    scanf("%d",&E.D.annee);
                }
                while(E.D.annee<=0);


                printf("le nom est %s\n",E.nom);
                printf("le prenom est %s\n",E.prenom);
                printf("la date de naissance est le %d/%d/%d \n",E.D.jour,E.D.mois,E.D.annee);
                printf("la moyenne est %.2f\n\n",E.moy);

                if(i==1)
                {
                    max=E.moy;
                }
                else if(max<E.moy)
                {
                    max=E.moy;
                }
                VIDER
            }
            printf("la plus grande moyenne est %.2f",max);
        }


/* 1ere methode(non recommander)
struct ETUDIANT{
char nom[30],prenom[50];
float moy;

struct DATE{
    int j,m,a;
}d;
}E;
*/

