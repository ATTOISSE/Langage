#include<stdio.h>
main()
{
    int h,min,s;

    printf("entrez l'heure " );
    scanf("%d",&h);

     printf("entrez l'heure " );
    scanf("%d",&min);

     printf("entrez l'heure " );
    scanf("%d",&s);

    if(h<=23 && min<=59 && s<=59)
        printf("heure valide");
    else
        printf("heure invalide");
    s=s+1;
    if(s>59)
    {
     s=0;
     min=min+1;

    }
    if(min>59)
    {
        min=0;
        h=h+1;
        s=0;
    }

     if(h>59)
    {
        min=0;
        h=h+1;
        s=0;
    }


    printf("heure est %d h %d min %d s",h,min,s);
    getch();

}
