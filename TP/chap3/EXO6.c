#include<stdio.h>
#include<math.h>
main()
{
    int x,i,y,p=1;
    do{
    puts("donner un entier ");
    scanf("%d",&x);

    puts("donner un autre entier ");
    scanf("%d",&y);}
    while(!(x>0 && y>0));

   /* p=pow(x,y);*/
   for(i=1;i<=y;i++)
   {
       p*=x;
   }


    printf("le resultat de '%d' puissance '%d' est '%d'",x,y,p);

    getch();
}
