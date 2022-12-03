#include<stdio.h>
main()
{
    int e=1,somdu,m,r,nb10,nb5;

    do
    {
        puts("entrez le montant");
        scanf("%d",&e);
        somdu+=e;
    }while(e<0);
    printf("vous devez %d euros \n",somdu);
    puts("montant verse");
    scanf("%d",&m);
    r=m-somdu;
    nb10=0;
    while(r>=10)
    {
        nb10++;
        r=r-10;
    }
    nb5=0;
     if(r>=5)
    {
        nb5=1;
        r=r-5;
    }
    puts("Rendu de la monnaie");
    printf("billets de 10 E est %d \n",nb10);
    printf("billet de 5 E est %d \n",nb5);
    printf("Piece de 1 E est %d \n",r);

}
