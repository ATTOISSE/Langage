#include<stdio.h>
struct PERSONNE
{
    char nom[25];
    char prenom [30];
    int age;
    float moy;
}P;
main()
{


int i;
float max;
for(i=1;i<=3;i++)
{

   puts("donner un nom");
   scanf("%s",&P.nom);
   puts("donner un prenom");
   scanf("%s",&P.prenom);
   do{
   puts("donner un age");
   scanf("%d",&P.age);
    }while(P.age<0);
   do{
   puts("donner un moyenne");
   scanf("%f",&P.moy);
    }while(P.moy<0 || P.moy>20);
   printf("le nom est %s\n",P.nom);
    printf("le prenom est %s\n",P.prenom);
     printf("le age est %d\n",P.age);
      printf("la moyenne est %.2f\n",P.moy);
      if(max<P.moy)
      {
          max=P.moy;
      }
}
printf("la plus grande moyenne est %.2f",max);
}




// 2e methode( la plus recommande)


