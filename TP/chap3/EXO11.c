#include<stdio.h>
main()
{
    int n,i,j,cpt,val=0;

    do{
        puts("entrez une valeur");
        scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<=n;i++)
    {
        do{
            cpt=0;
            val++;
            for(j=1;j<=val;j++)
            {
                if(val%j==0)
                    cpt++;
            }
        }while(cpt!=2);
        printf("le %de nombre premier est %d \n",i,val);
    }
}
