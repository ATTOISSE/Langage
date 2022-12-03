#include<stdio.h>
main()
{
    float a,b,c,d;

    printf("entrer un premier nombre " );
    scanf("%f",&a);

    printf("entrer un deuxieme nombre " );
    scanf("%f",&b);

    printf("entrer un troisieme nombre " );
    scanf("%f",&c);

    printf("entrer un quatrieme nombre " );
    scanf("%f",&d);

    if(a>50 && a<=100)
        printf("\n le candidat est elu ");
    if(a<12.5)
        printf("\n le candidat est battu ");
    if((a>=12.5 && a<=50) && a>b && a>c && a>d)
        printf("\n le candidat est en tete du premier tour");
    if((a>=12.5 && a<=50) && (b>a || c>a || d>a))
        printf("\n le candidat le candidat n%Cest pas en t%cte du premier tour",39,136);

    getch();
}
