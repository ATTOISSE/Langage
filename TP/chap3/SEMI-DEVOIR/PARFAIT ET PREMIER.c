#include<stdio.h>

int main()
{

    int somme=0, nbr, i,j,n,cpt,m;

    printf(" Entrez un nombre: ");
    scanf("%d",&nbr);


    for(m=1; m<=nbr; m++)
    {
        cpt=0;
        somme=0;
        for(i = 1; i<m; ++i)
        {
            if(m%i == 0)
            {
                somme = somme + i;
            }
        }

        for(j=1; j<=m; j++)
        {
            if(m%j==0)
            {
                cpt++;
            }
        }
        if(somme == m)
        {
            printf(" %d est Nombre parfait \n",m);
        }


        if(cpt==2)
            printf("%d est premier \n",m);
    }
    getch();
    return 0;
}

