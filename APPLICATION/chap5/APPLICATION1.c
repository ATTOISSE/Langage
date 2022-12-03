#include<stdio.h>
#define N 3


main()
{
    int i,som=0,t[N];

    puts("remplissage du vecteur");
    for(i=0;i<N;i++)
    {
        printf("donner un entier a la cellule %d du vecteur \n",i);
        scanf("%d",&t[i]);
    }
    puts("affichage du contenue du vecteur");
    for(i=0;i<N;i++)
    {
        printf("%d \t",t[i]);
    }
    // determination de la somme des nombres impair du vecteur
    for(i=0;i<N;i++)
    {
        if(t[i]%2==1)
            som+=t[i];
    }
    printf(" \n la somme des nombre impairs du vecteur est %d",som);

    getch();
}

