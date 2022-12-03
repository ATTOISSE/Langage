#include<stdio.h>
main()
{
    int a;

    do{
        puts("donener une valeur comprise entre 10 ET 20");
        scanf("%d",&a);

        if(a<10)
            puts("PLUS GRAND!");
        if(a>20)
        puts("PLUS PETIT!");
    }while(a<10 || a>20);
}
