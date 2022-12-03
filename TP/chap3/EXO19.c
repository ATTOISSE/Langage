#include<stdio.h>
main()
{
    int n,i,j,cpt=0;

    do{
      puts("saisir un entier positif pair devisible par 4 et mulp de 10 ");
        scanf("%d",&n);
    }while(!(n>0 && n%2 ==0 && n%4==0 && n%10==0));
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%j==0)
                cpt++;
        }
        if(cpt==2)
            printf("%d \n",i);
        cpt=0;
    }

}
