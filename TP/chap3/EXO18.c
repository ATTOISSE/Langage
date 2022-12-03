#include<stdio.h>
main()
{
    int x,i,cpt=0,som=0,somme=0,cpt1=0,cpt2=0,n=0;
    float moy,p;

    do{
        puts("donner un entier");
        scanf("%d",&x);
        if(x!=-1){
                n++;
            cpt=0;
            som=0;
            for(i=1;i<=x/2;i++){
                if(x%i==0){
                    cpt++;
                    som+=i;
                }
            }
            if(cpt==1){
                somme+=x;
                cpt1++;
            }
            if(som==x && x!=0)
            {
                  cpt2++;
            }

        }

    }while(x!=-1);
    if(cpt1==0)
        puts("aucun un nombre premier");
    else{
        moy=(float)somme/cpt1;
        printf("moyenne des nombre 1er %.2f \n",moy);
    }
    if(cpt2==0)
        puts("aucun nombre parfait");
    else{
        p=(float)(cpt2*100)/n;
        printf("le pourcentage des nombres parfait %.2f%%\n",p);

    }
    printf("%d",n);
    getch();
}
