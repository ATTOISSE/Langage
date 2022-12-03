#include<stdio.h>
main()
{
    int i,n,k,j,cpt,cpt1=0;

    do
    {
        puts
        ("donner le nombre d'element du tableau");
        scanf("%d",&n);
    }
    while(n<=0);

    int t[n];
    int tab[n];



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


            tab[cpt1]=t[i];
            cpt1++;


        }
    }
    puts("");

    for(i=0; i<n; i++)
    {
        printf(" %d \t ",t[i]);
    }

    puts("\n");





    for (i = 0; i < cpt1; i++)
    {
        for (j = i + 1; j < cpt1;)
        {
            if (tab[j] == tab[i])
            {
                for (k = j; k < cpt1; k++)
                {
                    tab[k] = tab[k + 1];
                }
                cpt1--;
            }
            else
                j++;
        }
    }

    printf(" transfere de nombre premier sans doublons: \n");
    for (i = 0; i < cpt1; i++)
    {
        printf("%d \t", tab[i]);
    }

    getch();


}

