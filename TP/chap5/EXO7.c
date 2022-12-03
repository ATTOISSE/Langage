#include<stdio.h>

int main(void)
{
    int i,n,cpt=0;
    int x;

    do
    {
        puts("donner le nombre de cellule du tableau");
        scanf("%d",&n);

    }while(n<=0);
    int t[n];

    puts("donner une valeur quelconque");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        printf("entrer un nombre [%d] \n",i);
        scanf("%d",&t[i]);

        if(t[i]== x)

            cpt++;

    }

    for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }

    printf("\n\n IL Y A %d valeur(s) quelconque qui est(sont) present",cpt);

    getch();
    return 0;

}

