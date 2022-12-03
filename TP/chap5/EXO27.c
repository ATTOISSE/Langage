#include<stdio.h>
#include<string.h>
/*
main()
{
    int n,i,j,cpt=0;
    do
    {
        puts("donner le de mots");
        scanf("%d",&n);
    }
    while(n<=0);
    fflush(stdin);

    char t[n][20];

    puts("Remplissage du tableau");

    for(i=0; i<n; i++)

    {
        printf("donner le %de mot \n",i+1);
        gets (t[i]);
    }

    puts("Affichage du tableau \n");

    for(i=0; i<n; i++)
    {
        printf("[%s] \t",t[i]);
    }
/*
    for(i=0; i<n; i++)
    {
        for(j=0;j<strlen(t[i]);j++)
        {


            if(t[i][j]=='m' || t[i][j]=='M')
        {
            cpt++;
            break;
        }
        }
    }

    for(i=0; i<n; i++)
    {
        j=0;
        while(t[i][i]!='\0')
        {
             if(t[i][j]=='m' || t[i][j]=='M')
             {
                cpt++;
            break;
             }
        }
        j++;
    }

          for(i=0;i<n;i++)
          {
              if(strchr(t[i],'m')!= NULL || strchr(t[i],'M')!= NULL)
              {
                  cpt++;
              }
          }
    if(cpt==0)
        puts(" \n Aucun mot ne contient 'm' ou 'M' ");
        else
        printf(" \n il y a %d mot qui contient la lettre 'm' ou 'M' ",cpt);



}*/

main()
{
   int n,cpt=0;

   do
   {
       puts("donner le nombre de mot a saisir");
       scanf("%d",&n);
   }while(n<=0);

   fflush(stdin);

    char t[n][150];

    int i;

    for(i=0;i<n;i++)
    {
        puts("Donner Le mot");
        gets(t[i]);


    }

     for(i=0;i<n;i++)
    {
        printf("%s \t",t[i]);
    }


     for(i=0;i<n;i++)
          {
              if(strchr(t[i],'m')!= NULL || strchr(t[i],'M')!= NULL)
              {
                  cpt++;
              }
          }

          (cpt==0)?puts("\n aucun mot"):printf("\n%d",cpt);
}

