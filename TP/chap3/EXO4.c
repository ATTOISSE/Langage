#include<stdio.h>
main()
{
    int a,b,tble;


    do
    {

        puts("veuillez donner un nombre comprise en 5 et 500");
        scanf("%d",&b);

    }
    while(b<5 || b>500);
 printf("le tale de multiplicationde DE %d est \n",b);
    for(a=1; a<=10; a++)
    {
        tble=a*b;

        printf(" %d * %d = %d \n",b,a,tble);
    }
    getch();
}
