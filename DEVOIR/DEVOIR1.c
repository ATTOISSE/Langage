#include<stdio.h>
main()
{
    int t,h,m,s;
    puts("donner L heure ");
    scanf("%d%d%d",&h,&m,&s);

    t=(s+(h*3600)+(m*60))-3602;
    h=t/3600;
    m=( t%3600)/60;
    s=( t%3600)%60;
    if(h<24)
        printf("%d %d %d",h,m,s);

    if(h==24)
        printf("%d %d %d",0,m,s);

    if(h>24)
        printf("heure invalide");
}

