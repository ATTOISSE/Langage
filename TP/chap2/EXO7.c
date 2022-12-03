#include<stdio.h>
main()
{
    int a,b;
    int j,f,mars,av,mai,juin,jul,aout,sep,oct,nov,dec;

    printf("donner une valeur " );
    scanf("%d",&a);

    printf("donner une autre valeur " );
    scanf("%d",&b);

    if((a==1 && b>=0) || (a==3 && b>=0) || (a==5 && b>=0) || (a==7 && b>=0) || (a==8 && b>=0) || (a==10 && b>=0) || (a==12 && b>=0))
        printf("LE MOIS a  31JOURS",j,mars,mai,jul,aout,oct,dec);
    if((a==4 && b>=0) || (a==6 && b>=0) || (a==9 && b>=0) || (a==11 && b>=0))
        printf("LE MOIS a 30jours",av,juin,sep,nov);
        if(a==2 && b%4==0)
            printf("le mois a 29jours",f);
    if(a==2 && b%4!0)
        printf("le mois a 28jours");
    getch();

}
