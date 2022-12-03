#include<stdio.h>
main()
{
    int i,j,n,cpt=0,cpt2=0,s,cpt1,somme=0,p=1,som=0;
    float moy;

    do
    {
        puts("donneer une valeur positif");
        scanf("%d",&n);
    }
    while(n<=10);

    for(j=1; j<=n; j++)
    {
        cpt1=0;
        s=0;



        if(j%2==0)
        {
            som+=j;
        }
        if(j%2==1)
        {
            p*=j;
        }
        for(i=1; i<=j/2; i++)
        {

            if(j%i==0)
            {
                cpt1++;
                s+=i;

            }


        }
        if(s==j)
        {
            cpt++;
        }
        if(cpt1==1)
        {
            somme+=j;
            cpt2++;
        }


    }


    printf("la somme des nombre pair est %d \n",som);



    printf("le produit des nombres impairs est %d \n",p);

    moy=(float) somme/cpt2;
    printf("la moyenne des nombres premiers est %.2f \n",moy);

    printf("il y a %d nombres parfait",cpt);
    getch();


}
