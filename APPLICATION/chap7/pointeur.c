#include<stdio.h>
#include <stdio.h>
typedef struct
{
    char *nom;
    char *prenom;
    int *age;

}PERSONNE;

main()
{
    PERSONNE *tab;
    int i,n;

    do
    {
        puts("donner le nombre de personnes");
        scanf("%d",&n);
    }while(n<=0);
    fflush(stdin);

    tab = (PERSONNE*) malloc (n*sizeof(PERSONNE));

    for(i=0;i<n;i++)
    {
        puts("Donner votre nom");
        (tab+i)->nom = (char*)malloc(25*sizeof(char));
        gets((tab+i)->nom);
        puts("Donner votre prenom");
         (tab+i)->prenom = malloc(25*sizeof(char));
        gets((tab+i)->prenom);
        fflush(stdin);

        do
        {
            puts("donner l'AGE");
           (tab+i)->age = (int*) malloc(25*sizeof(int));
            scanf("%d",&(tab+i)->age);
        }while((tab+i)-> age<=0 || (tab+i)->age>150);
          fflush(stdin);
    }

    puts("********* AFFICHAGE DU TABLEAU ************* ");

     for(i=0;i<n;i++)
    {
        printf("NOM:%s\n",(tab+i)->nom);
        printf("PRENOM:%s\n",(tab+i)->prenom);
        printf("AGE:%d \n",(tab+i)->age);
        puts(" ");
    }
}
