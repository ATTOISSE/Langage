
#include<stdio.h>
#define tva 0.18
main()
{

double code,prix,qnte;
double mttc,mht;
 char chaine[7];
printf("entrez un nom : ");
printf("entrez le code: "); scanf("%lf",&code);
printf("entrez le prix: "); scanf("%lf",&prix);
printf("entrez la quantite: "); scanf("%lf",&qnte);
printf("entrez la chaine: "); scanf("%s",&chaine);
mht=qnte*prix;
printf("le nom est %s",chaine);
mttc=prix*qnte*tva;
printf("les produits sont:\n code=%.0lf \n prix=%.0lf \n quantite=%.0lf \n",code,prix,qnte);
printf("le montant hors taxes = %.0lf \n et le montant tous taxes comprises= %.0lf \n",mht,mttc);
getch();
printf("\n **** fin du programme ***** \n");
}

