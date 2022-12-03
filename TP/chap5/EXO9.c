#include<stdio.h>


main()
{
    int i,n;

    do{
        printf("donner le nombre de cellule \n");
        scanf("%d",&n);
    }while(n<=0);
    int t[n];

    for(i=0;i<n;i++)
    {
        printf("donner une valeur a la cellule [%d] du 1er tableau \n",i);
        scanf("%d",&t[i]);
    }
    int t1[n];

  for(i=0;i<n;i++)
    {
        printf("donner une valeur a la cellule [%d] du 1er tableau \n",i);
        scanf("%d",&t1[i]);
    }

    int t3[n];

    for(i=0;i<n;i++)
    {
        t3[i]=t[i]+t1[i];

            printf("%d \t",t3[i]);

    }

   getch();

}
