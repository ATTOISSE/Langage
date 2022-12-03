#include<stdio.h>
#define vider fflush(stdin);
struct PRODUIT
{
    int code;
    char libelle[25];
    int quantite;
    int prix;
}P,max;
main()
{
    int i;
    // BUFFER LE MEMOIRE TEMPON QUI PERMET DE PRENDRE LA VALEUR ET L'AMENER à LA MEMOIRE RAM


    for(i=1;i<=2;i++)
    {
        puts("donner le code");
        scanf("%d",&P.code);
        vider
        puts("DONNER le libelle");
        gets(P.libelle);
        vider
        do
        {
              puts("donner la quantite");
        scanf("%d",&P.quantite);
        }while(P.quantite<0);
      do{
        puts("donner le prix");
        scanf("%d",&P.prix);
        }while(P.prix<0);
        printf("le code est %d\n",P.code);
        printf("le libelle est %s\n",P.libelle);
        printf("la quantite est %d\n",P.quantite);
        printf("le prix est %d\n",P.prix);

        if(i==1)
        {
            max=P;
        }

        if(max.prix<P.prix)
        {
            max=P;
        }
        system("pause");
        system("cls");
    }
        printf("le code est %d\n",max.code);
        printf("le libelle est %s\n",max.libelle);
        printf("la quantite est %d\n",max.quantite);
        printf("le prix est %d\n",max.prix);

}
