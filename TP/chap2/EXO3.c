#include<stdio.h>
main()
{
    int a;
    int abs;
    printf("donner une valeur : ");
    scanf("%d",&a);

    if(a<0)
      {abs=-a;
       printf("la valeur absolue de %d  EST %d \n",a,abs);}
    else
    {
          if(a>0)
      {abs=a;
       printf("la valeur absolue de %d  EST %d \n",a,abs);}
       else
          printf("la valeur absolue de %d EST %d \n",a,abs);
}
        printf("\n **** ARCHIMED POPOSSE ***** \n");
        return 0;
    }

