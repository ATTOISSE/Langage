#include<stdio.h>
main()
{
    int n,i,val,j,som=0;

        do{
            puts("donner un entier positif");
            scanf("%d",&n);
        }while(n<=0);

    for(i=1;i<=n;i++)
    {
        do{
            puts("entre un nombre positif");
            scanf("%d",&val);
        }while(val<=0);
        som=0;
        for(j=1;j<=val/2;j++)
        {
            if(val%j==0)
            {
                som+=j;
            }
        }
        if(som==val)
        {
            printf("%d est un nombre parfait\n",val);
        }

    else{
        printf("%d n%cest pas un nombre parfait\n",val,39);
    }
    }
}
