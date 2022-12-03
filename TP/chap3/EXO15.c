#include<stdio.h>
main()
{
    int n,j,i=6,cpt=0,som=0;

    do{
        puts("donner une valeur positif");
        scanf("%d",&n);
    }while(n<=0);
    do{
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
                som+=j;
        }
        if(som==i){

            printf(" LE nombre parfait est %d \n",i);
             cpt++;
        }
        i++;
        som=0;
    }while(cpt!=n);
}
