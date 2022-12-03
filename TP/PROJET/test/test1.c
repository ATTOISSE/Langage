#include<stdio.h>
#define N 2
typedef struct
{
   char libelle [20];
   int prix;
   int qte;
}PRODUIT;

void bonjour(void)
{
    printf("bonjour");
}
int carre(int n)
{
     bonjour();
    return n*n;
}

PRODUIT saisirpro(void)
{
    PRODUIT P;
    puts("\ndonner le libelle");
    gets(P.libelle);

    puts("donner le prix");
    scanf("%d",&P.prix);

    puts("donner la quantite");
    scanf("%d",&P.qte);
    return P;
}

void affichagepro()
 {
     PRODUIT P;
     printf("[%s]-[%d]-[%d]",P.libelle,P.prix,P.qte);
 }


 PRODUIT remplirtabpro(void)
{
    PRODUIT P[N];
    int i;

    for(i=0;i<N;i++)
    {
       P[i] = saisirpro();
       fflush(stdin);
    }

    return P[N];
}

void affichetab(void)
{
    PRODUIT P[N];
    int i;
     for(i=0;i<N;i++)
    {
     affichagepro(P[i]);
    }
}





int main()
{
  bonjour();
  int a;

  printf(" \ndonner le nombre:");
  scanf("%d",&a);
  fflush(stdin);

  printf(" \nle carre de %d = %d",a,carre(a));

 // saisirpro();
  //affichagepro();
    remplirtabpro();
    affichetab();

 return 0;
}
