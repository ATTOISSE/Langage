#include<stdio.h>
main()
{
    int a,n,i,table;

    puts("donner une valeur comprise entre 2 et 100");
    scanf("%d",&a);

    for(n=1;n<=a;n++)
    {
        printf(" *~+~*~+~* le table de %d *~+~*~+~*\n",n);
        for(i=1;i<=10;i++){

            table=n*i;

            printf("%d * %d = %d \n",n,i,table);
        }
    }
    getch();
}

