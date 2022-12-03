#include<stdio.h>
#define n 1
#define m 2
main()
{
    int mat[n][m],j,i,max,cpt=0,som=0;
    float moy;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("donner la valeur de %de colonne \n",i+1);
            scanf("%d",&mat[i][j]);

        }
    }
    max=mat[1][1];

    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
           if(mat[i][j]>max)
           {
               max=mat[i][j];
               cpt++;
               som+=mat[i][j];
           }

       }

}
       moy = (float) som/cpt;

       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               printf("%d \t",mat[i][j]);
           }
           puts("");
       }

    printf(" la moyenne des colonnes est %.2f ",moy);

}
