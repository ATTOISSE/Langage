#include<stdio.h>
main()
{
    int a,i,n,som=0,mul=1;

   do{
    puts("donner un entier positif");
    scanf("%d",&a);}while(a<0);
    n=3*a;
    if(n>=0){
    for(i=1;i<=n;i++)
    {
        if(i%2==0)

            som+=i;

        else
            mul*=i;

    }
    printf("la somme est %d et\n la multiplication est %d \n",som,mul);
    }else
    puts("le nombre n est positif");
    getch();
}
