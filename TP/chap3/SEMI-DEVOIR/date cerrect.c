#include<stdio.h>
main()
{
    int j,m,a;
     int dateok=0;
    do{
        puts("donner le jour");
        scanf("%d",&j);
        puts("donner le mois");
        scanf("%d",&m);
        puts("donner l annee");
        scanf("%d",&a);
        if(a<0)
        {
           puts("l annee doit etre positif");
        }

         if(m<1 && m>12)
        {
            puts(" le mois doit etre compris entre 1 a 12");
        }
        else{
            int nbj;
            if(m==4 || m==6 || m==9 || m==11)
            {
                nbj=30;
            }
            else if(m==2)
            {
               if(a%4==0 && a%100==0)
               {
                  nbj=29;
               }
               else
                nbj=28;

            }
            else {
                    dateok=1;
            }
        }
    }while(!(j>1 && j<=31 && m>1 && m<=12 && a>0));
    puts("la date saisie est");
    printf("%d / %d / %d",j,m,a);
}
