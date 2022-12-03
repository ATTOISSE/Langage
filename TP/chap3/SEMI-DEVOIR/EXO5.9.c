#include<stdio.h>
main()
{
    int max,a,i=0,pgi=0;

    do
    {
        puts("donner une valeur");
        scanf("%d",&a);
      i++;
        if(max<a)
        {
          max=a;
            pgi=i;
        }

    }while(a!=0);
    if(a==0 && i==1)
        puts("AUCUN NOMBRE SAISIE");
    else
    {
         printf("le maximum est %d et le numero d ordre est %d",max,pgi);
    }

    getch();
}

