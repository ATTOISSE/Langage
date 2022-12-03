#include<stdio.h>
main()
{
      int somme,som=0, nbr,j,cpt=0, i;
      float moy;
    do
    {
        printf(" Entrez un nombre: ");
        scanf("%d",&nbr);
    }
    while(!(nbr>0 && nbr%2==0 && nbr%5==0));
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
            som+=j;
            cpt++;
        }



}
moy= (float) som/cpt++;


            printf("LA MOYENNE EST %.2f \n",moy);
}
