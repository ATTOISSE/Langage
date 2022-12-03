#include<stdio.h>
main()
{
    int n,i,fact=1;
    puts("donner un entier positif");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
       fact*=i;
    }
    printf("%d!=%d",n,fact);
    getch();
}
