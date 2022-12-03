#include<stdio.h>
#include<stdio.h>
main()
{
    int a,b,j,i,val=0,som=0,cpt;


    do
    {
        puts("donner le nombre de valeur de la serie");
        scanf("%d",&a);
    }
    while(a<=0);

    for(j=1;j<=a;j++)
    {
        cpt=0;
       for(i=1;i<j;i++)
   {
       if(j%i==0 && i*i==j)
       {
           cpt++;
       }

   }
   if(cpt==1)
    printf("%d est carre\n",j);
    }

    getch();

}

