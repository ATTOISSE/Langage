#include<stdio.h>
main()
{
    int indice,annee;

    puts("donner un indice du mois ");
    scanf("%d",&indice);
    puts("donner l annee");
    scanf("%d",&annee);

    switch(indice)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        puts("ce mois compte 31jours");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        puts("ce mois compte 30jpours");
        break;
    case 2:
        if((annee%400==0) || (annee%4==0 && annee%100==0))
            puts("ce mois compte 29JOURS");
        else
            puts("ce mois compte 28jours");
        break;
        default:
        puts("indice de mois non pris en compte");
    }
}
