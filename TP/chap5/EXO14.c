#include<stdio.h>
main()
{
    int i,n,j,ok,cpt;
    float p;

      do
    {
        puts("donner le nombre de cellule du tableau");
        scanf("%d",&n);

    }while(n<=0);
    int t[n];

    for(i=0;i<n;i++)
    {
        printf("saisir  un nombre a la cellule [%d] \n ",i);
        scanf("%d",&t[i]);
    }



    for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);

    }
    puts("");

    for(i=0;i<n;i++)
    {
       ok=0;
//       j=0;
//       while(j<i && ok==0)
//       {
//           if(t[i]==t[j])
//          {
//               ok=1;
//           }
//           j++;
//       }
       for(j=0;j<i;j++)
       {

          if(t[i]==t[j])
          {
              ok=1;
              break;
          }
       }
       if(ok==0)
       {
           cpt=0;
           for(j=i;j<n;j++)
           {
                if(t[i]==t[j])
                    cpt++;

           }
           p=(float) cpt*100/n;

           printf("pourcentage de presence de %d est %.2f\n",t[i],p);
       }


    }

    getch();
}



