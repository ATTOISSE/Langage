#include <stdio.h>
#include <stdlib.h>
#include "BANK.h"

main()
{
    do
    {
        Debut:
        switch(menu1())
        {
        case 1:
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
             switch(menu2())
             {
                  case 1:
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            // retoure a la menu principal
            goto Debut;
            break;
             }

            break;

        case 5:
            break;

        case 6:
            break;

        case 7:
            break;

        case 8:
        puts("MERCI POUR LA VISITE");
        return 0;
            break;
        }

    }
    while(1);

}
