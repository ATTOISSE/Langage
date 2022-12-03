#include<stdio.h>
main()
{
    int h,min,s;

    printf("donner l'heure " );
    scanf("%d",&h);

      printf("donner minute " );
    scanf("%d",&min);

      printf("donner seconde " );
    scanf("%d",&s);

    printf("\n l%cheure saisie est %dh: %dmin: %ds \n",39,h,min,s);

    s++;
    if(s==60)
    {
        s=0;
        min++;

        if(min==60)
        {
            min=0;
            h++;
            if(h==24)
                h=0;
        }
    }
    printf("\n l%cheure qu%cil fera apres une seconde est %dh: %dmin: %ds:\n",39,39,h,min,s);

}
