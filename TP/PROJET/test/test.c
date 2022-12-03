#include<stdio.h>
#include "test.h"

void factoriel()
{
    int a,i,fact=1;

   puts("donner une valeur ");
   scanf("%d",&a);

   for(i=1;i<=a;i++)
   {
       fact*=i;
   }
   printf("%d! = %d",a,fact);
fflush(stdin);
}
ETUDIANT scanEtudiant(void)
{
    ETUDIANT E;

    puts("donner le nom");
    gets(E.nom);
    puts("donner le prenom");
    gets(E.prenom);
    fflush(stdin);
    do
    {
        puts("donner le moyenne");
        scanf("%f",&E.moy);
    }while(E.moy<0 || E.moy>20);
    fflush(stdin);
}

void printfEtudiant (ETUDIANT E)
{
   printf("%s-%s-%.2f",E.nom,E.prenom,E.moy);
}
