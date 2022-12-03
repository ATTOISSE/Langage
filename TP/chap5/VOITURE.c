#include<stdio.h>
#define n 10
 typedef struct
{
    char mark[29];
    char couleur[12];
    float puissance;
}VOITURE;
main()
{
    int i=0,cpt=0,k;
    VOITURE tab[n],t;


    do
    {
        puts("donner le mark");
        gets(t.mark);

         puts("donner le couleur");
        gets(t.couleur);
    do{
        puts("puissance");
        scanf("%f",&t.puissance);
    }while(t.puissance<=0);
        fflush(stdin);

        system("cls");
        cpt++;

        tab[i]=t;
        i++;

    }while(!(strcasecmp(t.mark,"audi") ==0));
    k=i;

    puts("affichage du tableau \n");

   for(i=0;i<k;i++)
   {
        if((strcasecmp(tab[i].mark,"PEUGEOT")==0) && strcasecmp(tab[i].couleur,"BLEU")==0 && tab[i].puissance>=150 && tab[i].puissance<=400)
        {

           printf("mark %s\n",tab[i].mark);
           printf("couleur %s \n",tab[i].couleur);
           printf("puissance %.1f",tab[i].puissance);
        }


   }

}

