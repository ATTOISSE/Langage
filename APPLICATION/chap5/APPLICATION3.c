#include<stdio.h>
#include<time.h>
main()
{
    //sa permet de controler le temps
    srand(time(NULL));
    int l,c,i,j,p,som;

    puts("donner la dimension d'une matrice");
    do{

        puts("donner le nombres de lignes");
        scanf("%d",&l);
    }while(l<=0);
    do{
        puts("donner le nombres de colonnes");
        scanf("%d",&c);
    }while(c<=0);

    int mat[l][c];
   // puts("Remplissage de la matrice");

    for(i=0;i<l;i++)
    {
           for(j=0;j<c;j++)
           {
//               printf("donner un entier a la cellule [%d,%d] de la matrice \n",i,j);
//               scanf("%d",&mat[i][j]);
            // rand c'est une fonction qui genere des valeurs aleatoires
            mat[i][j]=rand()%10;
           }
    }
    puts("affichage du contenu de la matrice");

    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d \t",mat[i][j]);
        }
        puts("");
    }


    for(i=2;i<l;i=i+2)
    {
        som=0;
        for(j=0;j<c;j++)
        {
            som+=mat[i][j];
        }
    }

     for(i=1;i<l;i=i+2)
    {
       p=1;
        for(j=0;j<c;j++)
        {
            p*=mat[i][j];
        }
    }
    printf("\n la somme des entiers de la ligne %d est %d \n",i,som);
    printf("le produit des entiers de la ligne %d est %d \n",i,p);
    getch();


}
