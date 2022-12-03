#include<stdio.h>
main()
{
    int i,x,j,cpt,pro=1,a,som=0,somme=0,cpt1=0,cpt2=0,n;
    float moy,p;
    char rep;
    do
    {
         puts("donner une valeur entiere");
         scanf("%d",&x);

    }while(x<0);

    for(j=1;j<=x;j++)
    {
        cpt1=0;
        pro++;
         for(i=1;i<=pro;i++)
    {
        if(pro%i==0)
        {
           cpt1++;
        }
    }
    if(cpt1==2)
        printf("%d est premier \n",pro);
    }




}
