#include<stdio.h>
#include<time.h>

main()
{
    int i,j,a,b;

    srand(time(NULL));

    do
    {
        puts("saisir le nombre de cellule  du 1ere  matrice");
        scanf("%d",&a);
        puts("saisir le nombre de cellule  du 2e  matrice");
        scanf("%d",&b);
    }
    while(a<=0 || b<=0);


    int mat[a][b];
    int mat1[a][b];
    int som[a][b];

    for(i=0; i<a; i++)
    {

        for(j=0; j<b; j++)
        {
            mat[i][j]=rand()%10;

        }
    }
    for(i=0; i<a; i++)
    {

        for(j=0; j<b; j++)
        {
            mat1[i][j]=rand()%10;

        }
    }

    if(a==b)
    {



        for(i=0; i<a; i++)
        {

            for(j=0; j<b; j++)
            {

                som[i][j]=mat[i][j]+mat1[i][j];

            }
        }


puts("\n affichage du premiere matrice");

    for(i=0; i<a; i++)
    {

        for(j=0; j<b; j++)
        {

            printf("%d \t",mat[i][j]);
        }
        puts("");
    }
        puts("\n affichage du deuxieme matrice");
    puts("");
    for(i=0; i<a; i++)
    {

        for(j=0; j<b; j++)
        {

            printf("%d \t",mat1[i][j]);
        }
        puts("");
    }

    puts(" \nla somme de deux matrice");

    for(i=0; i<a; i++)
    {

        for(j=0; j<b; j++)
        {

            printf("%d \t",som[i][j]);
        }
        puts("");


    }

    system("color 9c");

    }
     else
     {

        puts("impossible d'effectuer la somme");
        system("color 7a");
     }
    getch();
}
