#include<stdio.h>

main()
{
    int i,n,svg;

    do
    {
        puts("veuilles saisir la taille du tableau");
        scanf("%d",&n);

    }while(n<=0);

    int t[n];

    for(i=0;i<n;i++)
    {

        printf("donner la valeur de la %de cellule \n",i);
        scanf("%d",&t[i]);

    }

    puts("\n AVANT DECALAGE \n");


    for(i=0;i<n;i++)
    {
            printf("%d \t", t[i]);
    }

    svg=t[n-1];

    for(i=n-1;i>0;i--)
    {
        if(i!=0)
        {
            t[i]=t[i-1];
        }

        else
        {
            t[i]=svg;
        }
    }

    puts("aprs decalage \n");

    for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }

}
