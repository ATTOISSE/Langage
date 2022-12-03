#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c;
    float D,z,x,y;

    printf("donner une valeur " );
    scanf("%f",&a);
    printf("donner une autre valeur " );
    scanf("%f",&b);
    printf("donner une autre valeur " );
    scanf("%f",&c);

    if(a==0)
    {
        if(b==0)
        {

            if(c==0)

                puts("infinite de solutions");
            else
                printf("impossible de diviser par 0");
        }
        else
        {
            x=-c/b;
            printf("la solution est %.2f",x);
        }
    }
    else
    {
        D=(b*b)-(4*a*c);

        if(D<0)
            printf("la solution est impossible");
        if(D==0)
        {
            z=(-b)/(2*a);
            printf("la solution est %.1f",z);
        }

        if(D>0)
        {
            x=(-b-sqrt(D))/(2*a);
            y=(-b+sqrt(D))/(2*a);
            printf("les solutions sont %.1f et %.1f",x,y);
        }
    }

    getch();



}
