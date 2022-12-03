

#include<stdio.h>
void main()

{
    int a,b;
    int som,dif,mul,qe,rst;
    float qr;
    printf("donner une valeur entiere: "); scanf("%d",&a);

    printf("donner une autre valeur entiere: "); scanf("%d",&b);

    som=a+b;
    dif=a-b;
    mul=a*b;
    qe=a/b;
    rst=a%b;
    qr=(float)a/b;
    printf("la somme de %d et %d est %d\n",a,b,som);
    printf("la difference de %d et %d est %d\n",a,b,dif);
    printf("la multiplication de %d et %d est %d\n",a,b,mul);
    printf("le quotient de %d et %d est %d\n",a,b,qe);
    printf("le reste est %d\n",rst);
    printf("la LE QUOTINT REEL est %.1f\n",qr);
    printf("**** fin du prog ****\n");
    getch();
    // GETCH c'est pour l'execution


}
