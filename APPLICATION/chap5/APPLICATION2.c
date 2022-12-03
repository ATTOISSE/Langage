#include<stdio.h>
int main(void)
{
    int n,i,som=0,cpt=0;
    float moy;

    do
    {
        puts("donner le nombre d'element du vecteur");
        scanf("%d",&n);
    }while(n<=0);
    int tab[n];

      puts("remplissage du vecteur");
    for(i=0;i<n;i++)
    {
        printf("donner un entier a la cellule %d du vecteur \n",i);
        scanf("%d",&tab[i]);
        if(tab[i]%2==0)
        {
            som+=tab[i];
            cpt++;
        }
    }
    puts("afficher du contenu du vecteur");
    for(i=0;i<n;i++)
    {
        printf("%d \t",tab[i]);
    }
    if(cpt==0)
    {
        puts("aucun nombre pair dans le vecteur");
    }
    else{
        moy=(float) som/cpt;

        printf("\n la moyenne des nombres pairs est %.2f",moy);
    }
    getch();
    return 0;
}
