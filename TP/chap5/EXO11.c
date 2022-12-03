#include<stdio.h>
main()
{
    int i,n,max,min,j;

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
        {
            min=t[i];
            max=t[i];
        }

        else if(min>t[i])
        {
            min=t[i];
        }

        else if(max<t[i])
        {
            max=t[i];
        }


    }

    for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }

    puts("\n\n le nombres extremes du tableau sont");
    printf("le maximum est %d et le minimum est %d",max,min);
    getch();
}

