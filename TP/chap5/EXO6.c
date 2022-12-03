#include<stdio.h>
main()
{
    int n,cpt,j,som,i,cpt1=0,cpt2=0;

    do
    {
        puts("donner le nombre a saisir");
        scanf("%d",&n);
    }
    while(n<=0);

    int t[n];

    for(i=0; i<n; i++)
    {
        printf("donner la valeur de la %de cellule \n",i);
        scanf("%d",&t[i]);

        cpt=0;
        som=0;


        for(j=1; j<=t[i]/2; j++)
        {
            if(t[i]%j==0)
            {
                som+=j;
                cpt++;
            }
    }
            if(cpt==1)
                cpt2++;
            if(som==t[i])
                cpt1++;


        }
     for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }

printf("\n il y a %d nombre(s) premier \n",cpt2);
printf(" \n il y a %d nombre(s) parfait \n",cpt1);

system("color 5e");

getch();


}
