#include<stdio.h>
main()
{
    int n,som=0,i;
    float moy;

    do
    {
        puts("donner le nombre de cellule du tableau");
        scanf("%d",&n);
    }while(n<=0);

    int t[n];

    for(i=0;i<n;i++)
    {
        do{
        printf("donner la valeur du %d cellule \n",i);
        scanf("%d",&t[i]);
        }while(t[i]<0 || t[i]>20);
        som+=t[i];
    }
    moy= (float) som/n;

    for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }
    printf(" \n la moyenne du tableau est %.2f ",moy);
    getch();

}
