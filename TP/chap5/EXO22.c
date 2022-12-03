#include<stdio.h>

main()
{
    int i,n,ok=1,k,l;


    do
   {
      puts("donner le nombre de cellule");
        scanf("%d",&n);

   }
    while(n<=0);

    int t[n];

      for(i=0;i<n;i++)
    {

      printf("donner la valeur de la %de cellule \n",i+1);
       scanf("%d",&t[i]);
       // t[i]=rand()%10;

    }

     for(i=0;i<n;i++)
    {
            printf("%d \t", t[i]);
    }

puts("");
    for(i=0;i<n-1;i++)
    {
        if(t[i]!=(t[i+1]-1))
            ok=0;
            k=t[i+1]-1;
            l=t[i];

    }
    if(ok==1)
        printf("\n LES VALEURS SONT CONSECUTIFS alors [VRAI] \t %d \t %d",k,l);
    else
        puts("LES VALEURS NE SONT PAS CONSECUTIFS alors [FAUX]");
}
