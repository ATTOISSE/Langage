# include <stdio.h>


int main() {
   int nbr, i, j, k;


   printf(" Entrez le nombre d'element dans le tableau: ");
   scanf("%d", &nbr);

    int tab[nbr];
   for (i = 0; i < nbr; i++)
   {

   printf("donner la valeur de cellule [%d] \n",i);
      scanf("%d", &tab[i]);
   }


   // Supprimer les doublons
   for (i = 0; i < nbr; i++) {
      for (j = i + 1; j < nbr;) {
         if (tab[j] == tab[i]) {
            for (k = j; k < nbr; k++) {
               tab[k] = tab[k + 1];
            }
            nbr--;
         } else
            j++;
      }
   }

   printf(" Tableau sans doublons: \n");
   for (i = 0; i < nbr; i++) {
      printf("%d \t", tab[i]);
   }
 //getch();
   return 0;
}
