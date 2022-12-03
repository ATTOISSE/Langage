#include<stdio.h>
main()
{
    int som=0,n;




        do{
        printf("donner une valeur");
        scanf("%d",&n);
        if ((n%5==0))

        {
           if( n%3==0)
        {
           som+=n;
        }
        }


    }while(n!=0);
    if(som==0)
    puts("aucun nombre saisie");

    else
    printf("la somme est %d",som);
    getch();
}

