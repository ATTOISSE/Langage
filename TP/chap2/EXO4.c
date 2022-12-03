#include<stdio.h>
main()
{
    int a,b;

    printf("donner une valeur " );
    scanf("%d",&a);

    printf("donner une autre valeur " );
    scanf("%d",&b);

    if(a>0 && b>0 || a<0 && b<0)
        printf("\n le produit est positif \n");
    else
    {
        if(a<0 && b>0 || a>0 && b<0)
            printf("\n le produit est negatif \n");

            else
            printf("\n le produit est nul");
    }
    printf("\n **** ici c est BANGO **** \n");
    getch();
}
