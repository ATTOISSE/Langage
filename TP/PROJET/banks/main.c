#include"librairies.h"

main()
{
    COMPTE compte;
    char numero[10];
    int montant;
    do
    {
        debut:
        switch(menu1())
        {
        case 1:
            compte = createCompte();
            PAUSE
            CLS
            break;
        case 2:
            puts("Donner le numero de compte");
            gets(numero);
            printCompte(numero);
            PAUSE
            CLS
            break;
        case 3:
            printAllComptes();
            PAUSE
            CLS
            break;
        case 4:
            switch(menu2())
            {
            case 1:
                puts("Donner le numero de compte");
                gets(numero);
                do{
                    puts("Donner le montant a deposer");
                    scanf("%d",&montant);
                }while(montant<=0);
                if(versement(numero, montant) == 1)
                    puts("OPERATION DE VERSEMENT REUSSIE AVEC SUCCES!");
                PAUSE
                CLS
                break;
            case 2:
                puts("Donner le numero de compte");
                gets(numero);
                if(verifSolde(numero) == 0)
                    puts("Desole votre solde est insuffisant pour faire cette operation");
                else{
                    printf("Vous ne pouvez retirer qu'un montant inferieur ou egal a %d\n",verifSolde(numero));
                    puts("Donner le montant a retirer");
                    do{
                        scanf("%d",&montant);
                        if(montant>verifSolde(numero))
                            printf("Vous ne pouvez retirer qu'un montant inferieur ou egal a %d\n",verifSolde(numero));
                    }while(montant>verifSolde(numero));
                    if(retrait(numero, montant) == 1)
                        puts("OPERATION DE RETRAIT REUSSIE AVEC SUCCES!");
                }
                PAUSE
                CLS
                break;
            case 3:

                break;
            case 4:
                goto debut;
                break;
            }
            break;
        case 5:

            break;
        case 6:

            break;
        case 7:
            return 0;
            break;
        }
    }
    while(1);
}
