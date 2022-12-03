#include<stdio.h>
main()
{
    int jour,mois,annee;

    printf("donner une valeur \n" );
    scanf("%d",&jour);
    printf("donner une valeur \n" );
    scanf("%d",&mois);
    printf("donner une valeur \n" );
    scanf("%d",&annee);


    if(  (jour>=1 && jour<=31) && (mois==1 || mois==3 || mois==5 || mois==7 || mois==8 ||  mois==10 || mois==12))
    {


        printf("\n la date est valide \n",jour,mois,annee);
          }
     else if((jour>=1 && jour<=30) && (mois==4 || mois==6 || mois==9 || mois==9 || mois==11))
     {


        printf("\n la date est valide \n",jour,mois,annee);
     }
     else if(( jour>=1 && jour<=29) && (mois=2 && annee%4==0))
     {


        printf("\n la date est valide \n",jour,mois,annee);
             }
        else if((jour>=1 && jour<=28) && (mois==2))
        {


        printf("\n la date est valide \n",jour,mois,annee);

        }

    else
        printf("la date est invalide");
        getch();


}

