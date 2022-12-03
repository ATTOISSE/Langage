#include<stdio.h>
main()
{
int max,a,i,val;


do{
        puts("donner une valeur positif");
        scanf("%d",&a);
    }while(a<0);

    for(i=1;i<=a;i++)
    {
        puts("donner une valeur");
        scanf("%d",&val);
        if(i==0)
        {
            max=val;
        }
        else if(max<val)
        {
            max=val;
        }
    }printf("le max est %d",max);
}
