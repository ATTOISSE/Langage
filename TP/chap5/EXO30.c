#include<stdio.h>

typedef struct{
char code[5];
char libelle[20];
int prix;
int qte;

}PRODUIT;
main()
{
    int n,i,cpt=0,j;
    do
    {
        puts("donner le nombre de produit ");
        scanf("%d",&n);
    }while(n<=0);
   PRODUIT t[n],code;

   fflush(stdin);


   for(i=0;i<n;i++)
   {
    do{
     printf("donner le code du %de produit \n",i+1);
     gets(t[i].code);
    }while(!(strlen(t[i].code)<=4) || !(t[i].code[0]=='p') && !(t[i].code[0]=='P'));





   printf("Donner le libelle du %de produit \n",i+1);
gets(t[i].libelle);

   do{
   printf("donner le prix %de produit\n ",i+1);
   scanf("%d",&t[i].prix);

   }while(t[i].prix <=0);

    do{
   printf("donner LA QUANTITE %de produit \n",i+1);
   scanf("%d",&t[i].qte);

   }while(t[i].qte<=0);
   fflush(stdin);

   system("cls");

   if(strchr(t[i].libelle,'m')!= NULL || strchr(t[i].libelle,'M')!= NULL)
              {
                  cpt++;
              }
    }

    for(i=0;i<n;i++)
    {
        printf("le produit numero %d :\n\n",i+1);
        printf("le code du produit est %s\n",t[i].code );
        printf("le libelle du produit est %s\n",t[i].libelle);
        printf("le prix unitaire produit est %d\n",t[i].prix);
        printf("la quantite du produit est %d\n\n\n",t[i].qte);
    }

    printf("il y a %d libelle qui contient la lettre 'm' ou 'M' ",cpt);


}
