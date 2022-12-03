#include<stdio.h>

main()
{
    int i,n,tmp;

    do
    {
        printf("saisir le nombre de colone");
        scanf("%d",&n);
    }while(n<=0);

    int t[n];
    for(i=0;i<n;i++)
    {

        printf("donner la valeur de la %de cellule \n",i);
        scanf("%d",&t[i]);

    }

    tmp=t[0];

    for(i=0;i<n;i++)
    {
        t[i]=t[i+1];
    }

    t[n-1]=tmp;

    puts("");

    for(i=0;i<n;i++)
    {
            printf("%d \t", t[i]);
    }
}
