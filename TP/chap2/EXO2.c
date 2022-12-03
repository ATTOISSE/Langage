#include<stdio.h>

main()
{
    int entier;

    printf("donner une valeur :" );
    scanf("%d",&entier);

    if(entier>0)
        printf("\n le nombre %d est positif\n",entier);
    else
    {
        if(entier<0)
            printf("le nombre %d est negatif \n",entier);
        else
            printf("le nombre %d est nul \n",entier);
    }
    getch();
    printf("\n°*+°+*° AWAD PRO °*+°*+°\n");
}

