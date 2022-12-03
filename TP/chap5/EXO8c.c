#include<stdio.h>
main()
{
    int i,x,j,y;

    do{
        puts("donner le nombre de valeur de X");
        scanf("%d",&x);

    }while(x<=0);


    do{
        puts("donner le nombre de valeur de y ");
        scanf("%d",&y);

    }while(y<=0);

    int mat[x][y];

    for(i=0;i<x;i++)
    {


    for(j=0;j<y;j++)
    {
        printf("donner la valeur de la cellule %d \n",j);
        scanf("%d",&mat[i][j]);
    }

    }

    printf("AVANT \n");

    for(i=0;i<x;i++)
    {


        for(j=0;j<y;j++)
        {
            printf("%d \t",mat[i][j]);
        }

        puts("");
    }
    printf("\nAPRES\n\n");



        for(j=0;j<y;j++)
    {


         for(i=0;i<x;i++)
        {
            printf("%d \t",mat[i][j]);
        }

        puts("");
    }

    getch();

}
