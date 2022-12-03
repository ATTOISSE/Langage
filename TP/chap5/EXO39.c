#include<stdio.h>
#include<time.h>
main()
 {

srand(time(NULL));

  int i,j,y,k,x;


    do
    {
        puts("saisir le 2e nombre ");
        scanf("%d",&x);
        puts("saisir le 2e nombre ");
        scanf("%d",&y);


    }
    while(x<=0 || y<=0);


    int mat[x][y];
    int mat1[x][y];
    int pro[x][y];

    for(i=0; i<x; i++)
    {

        for(j=0; j<y; j++)
        {
            mat[i][j]=rand()%5;

        }
    }
    puts("");
    for(i=0; i<x; i++)
    {

        for(j=0; j<y; j++)
        {
            mat1[i][j]=rand()%10;

        }
    }

        puts("");

        if(x==y)
        {

        for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            pro[i][j]=0;
        for(k=0;k<y;k++){
            pro[i][j]+=mat[i][k]*mat1[k][j];
        }
        }
       }


puts("\n affichage du premiere matrice");

    for(i=0; i<x; i++)
    {

        for(j=0; j<y; j++)
        {

            printf("%d \t",mat[i][j]);
        }
        puts("");
    }
        puts("\n affichage du deuxieme matrice");
    puts("");
    for(i=0; i<x; i++)
    {

        for(j=0; j<y; j++)
        {

            printf("%d \t",mat1[i][j]);
        }
        puts("");
    }

    puts(" \nle produit de deux matrice");

    for(i=0; i<x; i++)
    {

        for(j=0; j<y; j++)
        {

            printf("%d \t",pro[i][j]);
        }
        puts("");


    }


    system("color 9c");
     }

     else     {

puts("\n affichage du premiere matrice");

    for(i=0; i<x; i++)
    {

        for(j=0; j<y; j++)
        {

            printf("%d \t",mat[i][j]);
        }
        puts("");
    }
        puts("\n affichage du deuxieme matrice");
    puts("");
    for(i=0; i<x; i++)
    {

        for(j=0; j<y; j++)
        {

            printf("%d \t",mat1[i][j]);
        }
        puts("");
    }

        puts("impossible d'effectuer CE PRODUIT");
        system("color 7a");
     }
    getch();
}
/*

#include<stdio.h>
#include<stdlib.h>
int main(){
  int mat1[10][10], mat2[10][10], mul[10][10];
  int n,m,i,j,k;
    printf("Entrez le nombre de lignes et de colonnes:\n");
    scanf("%d%d",&n,&m);

    printf("Entrez les éléments de la première matrice\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Entrez les éléments de la deuxième matrice\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

  printf("Multiplication du matrice = \n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      mul[i][j]=0;
      for(k = 0; k < m; k++)
      {
        mul[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
  //Afficher le résultat
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      printf("%d\t",mul[i][j]);
    }
    printf("\n");
  }
  return 0;
}
*/


