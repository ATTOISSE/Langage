#include<stdio.h>

 typedef struct
{
    char designation[29];
    int prix;
    float qte;
}produit;
main()
{
    int i=0,cpt=0,k,n;

    do
    {
        puts("donner le nombre des cellules du tableau");
        scanf("%d",&n);
    }while(n<=0);
      fflush(stdin);

  produit tab[n],t[n];

  for(i=0;i<n;i++)
  {


        puts("donner le designation");
        gets(t[i].designation);
    fflush(stdin);
   do{
        puts("prix");
        scanf("%d",&t[i].prix);
    }while(t[i].prix<=0);

    do{
        puts("quantite");
        scanf("%f",&t[i].qte);
    }while(t[i].qte<=0);
        fflush(stdin);

        if((strchr(t[i].designation,'k')!= NULL || strchr(t[i].designation,'K')!= NULL) && strlen(t[i].designation)>8)
        {
            tab[i]=t[cpt];
            cpt++;
        }
   }

   puts("TABLEAU 1:");

   for(i=0;i<n;i++)
   {
       printf("la designation du %de produit est %s\n",i+1,t[i].designation);
       printf("le prix du %de produit est %d\n",i+1,t[i].prix);
       printf("la qunatite du %de produit est %.2f\n\n",i+1,t[i].qte);

   }

    puts(" \n TABLEAU 2:");

   for(i=0;i<cpt;i++)
   {
       printf("la designation du %de produit est %s\n",i+1,tab[i].designation);
       printf("la PRIX du %de produit est %d\n",i+1,tab[i].prix);
       printf("la qunatite du %de produit est %.2f\n",i+1,tab[i].qte);



   }

}
