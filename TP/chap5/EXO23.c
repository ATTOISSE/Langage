#include<stdio.h>

main()
{
    int i,j,temp,n;

    do
    {
        puts("donner le nombre de cellule");
        scanf("%d",&n);
    }while(n<=0);

    int t[n];

    for(i=0;i<n;i++)
    {
        printf("entrez une valeur a la %de cellule \n",i+1);
        scanf("%d",&t[i]);
    }

    puts("AVANT");

     for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }

    puts("");

    puts("apres");


  for(i=n-1;i>=0;i--)
    {
        printf("%d \t",t[i]);
    }

}

