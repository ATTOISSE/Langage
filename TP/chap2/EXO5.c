#include<stdio.h>
main()
{
    int a;

    printf("donner une valeur : ");
    scanf("%d",&a);

    if(a==0)
        printf("le nombre saisie est NUL \n");
    else if(a>=1 && a<=2)

        printf("le nombre saisie est PETIT \n");
    else if(a==3)
        printf("le nombre saisie est MOYEN \n");
    else if(a>=4 && a<=5)
        printf("le nombre saisie est GRAND \n");
    else if(a>5)
        printf("le nombre saisie est HORS NORME \n");
    printf("\n ***** LE GENIE AZID ***** \n");
    return 0;
}

