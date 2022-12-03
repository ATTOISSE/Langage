#include<stdio.h>
main()
{
    int i,n,j,cpt,cpt1=0;

    do
    {
        puts
      ("donner le nombre d'element du tableau");
        scanf("%d",&n);
    }while(n<=0);

    int t[n];
    int T[n];



   for(i=0; i<n; i++)
    {
        printf("donner la valeur de la %de cellule \n",i);
        scanf("%d",&t[i]);

        cpt=0;


        for(j=1; j<=t[i]/2; j++)
        {
            if(t[i]%j==0)
            {

                cpt++;
            }
    }

            if(cpt==1)
            {


                T[cpt1]=t[i];
                cpt1++;


        }
    }
    puts("");

    for(i=0;i<n;i++)
    {
        printf(" %d \t",t[i]);
    }

        puts("\nle tranfere des nombres premier");


     for(i=0;i<cpt1;i++)
    {

        printf("\n\n %d \t",T[i]);
    }

    getch();


}
