#include<stdio.h>

struct MENDIANT
{
    char nom[27];
    char prenom[20];
    char nationalite[19];
    char region[25];
    char sexe[2];
    float moyenne;
}M,max;

int main (void)
{
    int i,n,cpt=0;
    float total=0;
    do
    {
        puts("donner le nombre de serie de mendiant ");
        scanf("%d",&n);
    }while(n<=0);

    for(i=1;i<=n;i++)
    {
        puts("donner le nom de mendiant");
        scanf("%s",&M.nom);
        puts("donner le prenom de mendiant");
        scanf("%s",&M.prenom);
        puts("donner la nationalite de mendiant");
        scanf("%s",&M.nationalite);
        puts("donner la region de mendiant ");
        scanf("%s",&M.region);
        puts("donner le sexe du mendiant");
        scanf("%s",&M.sexe);

        puts("donner la moyenne de mendiant ");
        scanf("%f",&M.moyenne);

        printf("le nom de mendiant est %s \n",M.nom);
        printf("le prenom de mendiant est %s \n",M.prenom);
        printf("la nationalite de mendiant est %s \n",M.nationalite);
        printf("la region de mendiant est %s \n",M.region);
        printf("le sexe de mendiant est %s \n",M.sexe);
        printf("la moyenne de mendiant %.2f \n",M.moyenne);


        if(strcasecmp(M.region,"DAKAR") != 0)
        {
            cpt++;
        }

        if(max.moyenne<M.moyenne)
        {
            max=M;
        }
        total+=M.moyenne;

    }
    printf("le montant total des mendiants est %.2f \n",total);
    printf(" il y a %d mendiant dont sa region autre que DAKAR \n",cpt);
    puts("le mendiant qui a la plus grande somme est \n\n");
    printf("le nom de mendiant est %s \n",max.nom);
    printf("le prenom de mendiant est %s \n",max.prenom);
    printf("la nationalite de mendiant est %s \n",max.nationalite);
    printf("la region de mendiant est %s \n",max.region);
    printf("le sexe de mendiant est %s \n",max.sexe);
    printf("la moyenne de mendiant %.2f \n",max.moyenne);

}
