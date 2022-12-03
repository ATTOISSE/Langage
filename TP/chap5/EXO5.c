#include<stdio.h>

main()
{
    int n,i,som=0,p=1;
    do
    {
        puts("donner le nombre de cellule du tableau ");
        scanf("%d",&n);
    }while(n<=0);

    int t[n];

    for(i=0;i<n;i++)
    {
        printf("donner la valeur de la %d cellule \n",i);
        scanf("%d",&t[i]);
        if(t[i]>0)
        {
            som+=t[i];
        }
        else if(t[i]<0)
        {
            p*=t[i];
        }
    }

     for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }

    printf("\nla somme des valeurs positif est %d",som);
    printf("\n le produit des nombres negatif est %d \n",p);

    getch();
}


