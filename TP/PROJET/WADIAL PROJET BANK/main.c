#include"bank.h"
main()
{
    do
    {
        debut :
        switch(menu1())
        {
        case 1:
            //Creation compte
            break;
        case 2:
            //tous les comptes
            break;
        case 3:
            //Detail compte
            break;
        case 4:
            //Operation compte
            switch(menu2())
            {
            case 1:
                //versement
                break;
            case 2:
                //retrait
                break;
            case 3:
                //virement
                break;
            case 4:
                //retour menu principal
                goto debut;
                break;
            }
            break;
        case 5:
            //toutes les operations Compte
            break;
        case 6:
            //toutes les operations Compte par date
            break;
        case 7:
            //fermer compte
            break;
        case 8:
            //quitter
            puts("Merci!!!!!");
            return 0;
            break;
        }
    }
    while(1);
}
