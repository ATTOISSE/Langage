
#include<stdio.h>

int main()
{

    int somme, nbr,j,cpt, i;
    do
    {
        printf(" Entrez un nombre: ");
        scanf("%d",&nbr);
    }
    while(nbr<=0);
    for(j=1; j<=nbr; j++)
    {
        somme=0;
        for(i = 1; i<j; i++)
        {
            if(j%i == 0)
            {
                somme = somme + i;
            }
        }

        if(somme==j)
        {
            printf("%d est un Nombre parfait \n",j);
        }



    }


    getch();
    return 0;
}
