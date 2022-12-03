#include<stdio.h>

struct PERSONNE{
char nom[25];
char prenom[30];
int age;

}P;
main()
{
    int i,n,som=0;
    float moy;
    do{
        puts("donner le nombre de serie");
        scanf("%d",&n);
    }while(n<0);
    fflush(stdin);
    for(i=1;i<=n;i++)
    {
        puts("donner le nom");
        gets(P.nom);
        fflush(stdin);
        puts("donner le prenom");
        gets(P.prenom);
        fflush(stdin);
        do{
        puts("donner l age");
        scanf("%d",&P.age);
        }while(P.age<0);
        som+=P.age;
          fflush(stdin);
        printf("le nom est %s\n",P.nom);
        printf("le prenom est %s\n",P.prenom);
        printf("l age est %d\n",P.age);

    }
    moy=(float) som/n;
    printf("la moyenne des ages est %.2f",moy);
    getch();
}
