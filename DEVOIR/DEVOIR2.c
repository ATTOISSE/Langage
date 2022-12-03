#include<stdio.h>
main()
{
    int prix,y=1500;
    float quantite,pa,mnap,rmse;

    puts("donner le prix");
    scanf("%d",&prix);

    puts("donner la quantite");
    scanf("%f",&quantite);

    pa=prix*quantite;

    printf("le prix d%cachat est %.2f \n",39,pa);

    if(pa<3000)
    {
        mnap=(pa-(12.5*pa/100)+y);
        printf("le montant net a payer est %.2f \n",mnap);
    }
    else if(pa>=3000 && pa<150000)

            {
                mnap=(pa-(7.5*pa/100)+y);
                printf("le montant net a payer est %.2f \n",mnap);
            }
            else if(pa>150000)
                 {
        mnap=(pa-(3*pa/100)+y);
        printf("le montant net a payer est %.2f \n",mnap);
    }
}




