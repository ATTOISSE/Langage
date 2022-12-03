#include<stdio.h>
main()
{
    int a,i,nn=0,np=0,no=0,p;
    do
    {
        puts("donner le nombre de saisie ");
        scanf("%d",&a);

    }while(a<=0);
    for(i=1;i<=a;i++)
    {
        puts("donner une valeur");
        scanf("%d",&p);
        if(p>0){
                np++;
        }

        else if(p<0){
          nn++;
        }

        else
        {
           no++;
        }

    }
    printf("le nombre positif %d negatif %d \n et nul %d",np,nn,no);

getch();
}
