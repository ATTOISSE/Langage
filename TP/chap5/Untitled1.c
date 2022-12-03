#include <stdio.h>
int main () {
int tab [5] ; /* un tableau de 10 entiers est initialisee */
int i ;
/* On demande a l’utilisateur de remplir les 10 cases du tableau */
for (i = 0 ; i < 5 ; i = i + 1) {
printf ("Quelle valeur pour la case %d ?\n", i) ;
scanf ("%d", &tab [i]) ;
}
/* On affiche a present le tableau complet */
printf ("Voici le tableau que vous avez rempli :\n") ;
for (i = 0 ; i < 5 ; i = i + 1) {
printf ("%d ", tab [i]) ;
}
printf ("\n") ;
return 0 ;
}
