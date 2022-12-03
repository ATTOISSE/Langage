#include<stdio.h>
main()
{
    int i,n,max,position;

      do
    {
        puts("donner le nombre de cellule du tableau");
        scanf("%d",&n);

    }while(n<=0);
    int t[n];

    for(i=0;i<n;i++)
    {
        printf("entrer un nombre\n",i);
        scanf("%d",&t[i]);
        if(i==0)
        max=t[i];
        else if(t[i]>max)
        {
            max=t[i];
            position=i;
        }


    }

    for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }

    printf("\n\n le nombre maximal est %d et sa position dans le tableau est %d",max,position);
    getch();
}
