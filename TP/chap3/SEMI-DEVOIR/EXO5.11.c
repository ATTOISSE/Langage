#include<stdio.h>
main()
{
    int n,a=1,b=1,i,p,x;

    puts("donner un nombre de cheveaux partant");
    scanf("%d",&n);
    puts("entrer le nombre des cheveaux joues");
    scanf("%d",&p);

    for(i=1;i<=p;i++)
    {
        a=a*(i+n-p);
        b=b*i;

    }
    x=a/b;
    printf("dans l'ordre une chance sur %d \n",a);
    printf("dans le desordre une chance sur %d \n",x);
}
