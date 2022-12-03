#include<stdio.h>

struct PRODUIT
{
    char reference[20];
    int code;
    float prix_unitaire;
    float quantite_stock;
}P;
int main (void)
{
    int i,n;
    float valeur_stock;
    do
    {
        puts("donner le nombre de la serie");
        scanf("%d",&n);
    }while(n<=0);

    for(i=1;i<=n;i++)
    {
        puts("donner la reference du produit");
        scanf("%s",&P.reference);
        puts("donner le code du produit");
        scanf("%d",&P.code);
        puts("donner le prix unitaire produit");
        scanf("%f",&P.prix_unitaire);
        puts("donner la quantite en stock");
        scanf("%f",&P.quantite_stock);

        valeur_stock=P.prix_unitaire*P.quantite_stock;

        printf("la reference du produit est %s \n",P.reference);
        printf("le code du produit est %d \n",P.code);
        printf("le prix unitaire est %.2f \n",P.prix_unitaire);
        printf("la quantite en stock est %.2f \n \n",P.quantite_stock);
        valeur_stock=P.prix_unitaire*P.quantite_stock;

    }


    printf("la valeur en stock est %.2f \n",valeur_stock);
    getch();
    return 0;

}
