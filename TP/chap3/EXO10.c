#include<stdio.h>
main()
{
    int n,i,j,cpt;
    do{
        puts("donner une valeur");
        scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<=n;i++)
    {
        cpt=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                cpt++;
            }
        }
        if(cpt==2)
            printf("%d est premier \n",i);
    }
}
