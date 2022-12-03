
#include<stdio.h>
#include<time.h>
#define n 7
main()
{
    int i,j,mat[n][n];



    srand(time(NULL));

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            mat[i][j]=rand()%10;
        }
    }

    puts("MATRICE :");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {

            if(i==j || i+j==n-1 || i>j )
            {
                printf("[%d] \t",mat[i][j]);
            }
            else
                printf("%d \t",mat[i][j]);
        }
        puts("");
    }
    puts(" \n les valeurs de la cellule grise sont :\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j || i+j==n-1 || i>j )
            {
                printf("[%d] \t",mat[i][j]);
            }
        }
    }

    puts("\n les valeurs entre crochet ces les valeurs grises");

    getch();

}
