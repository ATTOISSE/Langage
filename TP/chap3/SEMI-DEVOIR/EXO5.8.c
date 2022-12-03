#include<stdio.h>
main()
{
    int max,a,i,pgi;

   printf("%d",max);
    for(i=1;i<=3;i++)
    {
        puts("donner une valeur");
        scanf("%d",&a);

        if(max<a)
        {
          max=a;
            pgi=i;
        }

    }
    printf("le maximum est %d et le numero d ordre est %d",max,pgi);
}
