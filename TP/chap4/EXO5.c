#include<stdio.h>

struct MATIERE
{
    char nom [20];
    int coef;
    float note;
}M;
int main (void)
{
    int i,n,som=0;
    float moy;
    do
    {
     puts("donner le nombre de valeur de la serie");
        scanf("%d",&n);
    }while(n<=0);

    for(i=1;i<=n;i++)
    {
        puts("donner le nom du matiere");
        scanf("%s",&M.nom);
        puts("donner le coefficient de la matiere");
        scanf("%d",&M.coef);
        do
        {
             puts("donner la note du matiere");
             scanf("%f",&M.note);
        }while(M.note<0 || M.note>20);


        som+=M.note;

        if(M.coef>=2)
        {
          printf("la matiere est %s \n",M.nom);
        }

    }
    moy=(float) som/n;
    printf("la moyenne des notes est %.2f \n",moy);
    getch();
    return 0;
}
