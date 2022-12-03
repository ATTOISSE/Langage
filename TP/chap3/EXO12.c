#include<stdio.h>
main()
{
    int i,j,n,cpt,a;

    do{
        puts("donner le nombre de valeur DE la serie");
        scanf("%d",&n);
    }while(n<=0);

    for(i=1;i<=n;i++){
        do{
            puts("donner une valeur positif");
            scanf("%d",&a);
        }while(a<=0);
        cpt=0;
        for(j=1;j<=a;j++)
        {
            if(a%j==0)
            {
                cpt++;
            }
        }
        if(cpt==2){
            printf("%d est premier \n",a);
        }
        else
            printf("%d n%cest pas premier \n",a,39);
    }
}
