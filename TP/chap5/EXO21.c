#include<stdio.h>
main()
{
    int i,n,k,j,svg;

    do
    {
        puts("donner le nombre de cellule");
        scanf("%d",&n);
    }while(n<=0);
    int t[n];

    for(i=0;i<n;i++)
    {
        printf("donner la valeur de la %de cellule \n",i+1);
        scanf("%d",&t[i]);
    }

      do
    {
        puts("donner le RANG");
        scanf("%d",&k);
    }while(k<=0);

    puts("AVANT DECALAGE");

    for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }

    for(j=0;j<k;j++)
    {
        svg=t[n-1];

        for(i=n-1;i>0;i--)
        {
            t[i]=t[i-1];
        }
        t[0]=svg;

    }

    puts("APRES DECALAGE");

     for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }
}
