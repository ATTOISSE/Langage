#include<stdio.h>
main()
{
    int n,cpt1=0,cpt2=0,i;


    do
    {
        puts("donner le nombre de cellule du tableau");
        scanf("%d",&n);
    }while(n<=0);

    int t[n];

    for(i=0;i<n;i++)
    {
//        printf("donner la valeur du %d cellule \n",i);
//        scanf("%d",&t[i]);
        t[i]=rand()%101;
      if(t[i]>0)
      {
          cpt1++;
      }

      else if(t[i]<0)
      {
          cpt2++;
      }

    }


    for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }
printf("\n il y a %d nombre(s) positif \n",cpt1);
printf("il y a %d nombre(s) negatif\n",cpt2);


    getch();

}
