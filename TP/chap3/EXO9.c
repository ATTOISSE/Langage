#include<stdio.h>
main()
{
    int n,i,cpt=0;
    do
    {
        puts("entrez une valeur");
        scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cpt++;
        }
    }
   /* (cpt==2)?printf("%d est premier \n",n):
    printf("%d n%cest pas premier \n",n,39);*/

    if(cpt==2)
        printf("%d est premier \n",n);
    else
         printf("%d n%cest pas premier \n",n,39);
}
