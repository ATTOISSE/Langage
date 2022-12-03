#include<stdio.h>
main()
{
    int i,n,a,j,cpt,som=0;

    do
    {
        puts("donner une valeur premiere");
        scanf("%d",&n);
    }
    while(n<0);
        for(j=1; j<=n; j++)
        {
    do
    {





            puts("donner une valeur premiere");
            scanf("%d",&a);




            cpt=0;
            for(i=1; i<=a; i++)


            {


                if(a%i==0)
                {
                    cpt++;
                }
            }


            if(cpt==2 && a%3==0)
            {
                som+=a;
            }


    }
    while(!(cpt==2));
        }

    if(som==0)
    {
        printf("aucun nombre divisible par 3 saisie ");
    }
    else
    {
        printf("la somme est %d",som);
    }

}
