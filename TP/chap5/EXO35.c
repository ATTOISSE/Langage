#include<stdio.h>
#include<time.h>
#define n 7

main()
{
    int mat[n][n],i,j,som=0,p=1,cpt=0,somme=0;
    float moy;

    srand(time(NULL));

    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
         {
            mat[i][j]=rand()%10;
         }
    }

    puts("MATRICE :");

       for(i=0;i<n;i++)
    {
          for(j=0;j<n;j++)
          {
              printf("%d \t",mat[i][j]);
          }
          puts("");
    }

     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             if(i==j || i+j==n-1 || (i<j && i+j<n-1) )
             {
                 som+=mat[i][j];
             }

             if(i>j && i+j<n-1 || (i<j && i+j>n-1))
             {
                 p*=mat[i][j];
             }

             if(i>j && i+j> n-1)
             {
                 cpt++;
                 somme+=mat[i][j];
             }
         }

     }

     printf("la somme des valeurs des cellules grises : %d \n",som);
     printf("le produit des valeurs des cellules noirs : %d \n",p);

     moy=(float) somme/cpt;
     printf("la moyenne des valeurs des cellules branches : %.2f",moy);

     }
