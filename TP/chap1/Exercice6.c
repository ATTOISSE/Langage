

#include<stdio.h>

void main()
{
    double n1,n2,n3,point;
    double c1,c2,c3,M;

    printf("donner une primiere note: ");
    scanf("%lf",&n1);
    printf("donner le primiere coef : ");
    scanf("%lf",&c1);


    printf("donner une deuxieme note: ");
    scanf("%lf",&n2);
    printf("donner le deuxieme coef: ");
    scanf("%lf",&c2);

    printf("donner une troisieme note: ");
    scanf("%lf",&n3);
    printf("donner le troisieme coef: ");
    scanf("%lf",&c3);

    point=(n1*c1+n2*c2+n3*c3);
    M=point/(c1+c2+c3);
    printf("la moyenne est %.2lf \n",M);
    getch();
    printf(" *** ADIOS HHHH *****\n");

}




