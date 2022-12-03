#include<stdio.h>
main()
{
    int a,i,fact=1;

   puts("donner une valeur ");
   scanf("%d",&a);

   for(i=1;i<=a;i++)
   {
       fact*=i;
   }
   printf("%d! = %d",a,fact);
}
