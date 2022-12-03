#include<stdio.h>
main()
{
    int i,n,j,cpt,cpt1=0;
    float p;

      do
    {
        puts("donner le nombre de cellule du tableau");
        scanf("%d",&n);

    }while(n<=0);
    int t[n];

    for(i=0;i<n;i++)
    {
              cpt=0;
        printf("saisir  un nombre a la cellule [%d] \n ",i);
        scanf("%d",&t[i]);



       for(j=1;j<=t[i]/2;j++)
        {
           if(t[i]%j==0)
           {
               cpt++;
           }
        }
        if(cpt==1)
        {
            cpt1++;
        }



    }

  p=(float) cpt1*100/n;


    for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }

    printf("\n\n le pourtage de nombre(s) premier du tableau est %.2f",p);
    getch();
}


