#include<stdio.h>
main()
{
    int i,n,prod=1;
    char rep;

    do{
        puts("voulez vous saisir un entier");
        scanf("%c",&rep);

        if(rep=='o' || rep=='O')
        {
            puts("donner un entier");
            scanf("%d",&n);
            fflush(stdin);
            prod*=n;
        }
    }while(rep=='o'||rep=='O');
    if(prod==1 && n!=1)
        puts("aucun entier saisie");
    else
        printf("produit=%d",prod);

}
