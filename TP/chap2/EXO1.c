#include<stdio.h>
main()
{
    int entier;

    printf("donner une valeur : ");
    scanf("%d",&entier);

    if(entier>0)
        printf("\n\n le nombre %d est positif\n",entier);
    else
        printf("\n le nombre %d est negatif\n",entier);
    printf("\n~+*~*+~*+~ AYAD LE PAPO ~+*~*+~*+~\n\n");
    getch();
    return 0;
}
