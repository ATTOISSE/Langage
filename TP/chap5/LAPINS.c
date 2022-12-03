#include<stdio.h>
#define n 10
 typedef struct
{
    char type[29];
    char couleur[12];
    float poids;
}ANIMAL;
main()
{
    int i=0,cpt=0,k;
     ANIMAL tab[n],t;


    do
    {
        puts("donner le type");
        gets(t.type);

         puts("donner le couleur");
        gets(t.couleur);
    do{
        puts("poids");
        scanf("%f",&t.poids);
    }while(t.poids<=0);
        fflush(stdin);

        system("cls");
        cpt++;

        tab[i]=t;
        i++;

    }while(!(t.poids==10000));
    k=i;

    puts("affichage du tableau \n");

   for(i=0;i<k;i++)
   {
        if((strcasecmp(tab[i].type,"lapins")==0) && strcasecmp(tab[i].couleur,"noir")==0 && tab[i].poids<1.5)
        {

           printf("type %s\n",tab[i].type);
           printf("couleur %s \n",tab[i].couleur);
           printf("poids %.1f",tab[i].poids);
        }


   }

}
