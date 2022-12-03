#include<stdio.h>
#define n 1
typedef struct
{
    char nom[29];
    char prenom[29];
    int a;
}PERSONNE;

main()
{

    PERSONNE p,t[n];
    int i=0,k,age;
    char d;

    do
    {

      puts("donner le nom");
      gets(p.nom);

      puts("donner le prenom");
      gets(p.prenom);

d=p.prenom[strlen(p.prenom)-2];
      do{
      puts("donner l'annee");
      scanf("%d",&p.a);
        }while(p.a<1900 || p.a>2021);
        fflush(stdin);
        age=2021-p.a;


        if(age>=18 && d =='y')
        {

        t[i]=p;
        i++;
      }



    }while(strchr(p.nom,'a')== NULL);

    k=i;

    for(i=0;i<k;i++)
    {
        printf("le nom %s \n",t[i].nom);
        printf("le prenom %s\n",t[i].prenom);
        printf("l'annee %d \n",t[i].a);

    }
}

