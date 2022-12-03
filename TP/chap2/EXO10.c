#include<stdio.h>
main()
{
    char lettre;
    int chiffre;

    printf("donner un caractere " );
    scanf("%c",&lettre);

    if(lettre>=65 && lettre<=90)
        printf("la lettre saisie est MAJUSCULE");

    else if(lettre>=97 && lettre<=122)
        printf("la lettre saisie est mINUSCULE");

    else if(lettre>=49 && lettre<=57)
        printf(" est un CHIFFRE");

    else
        printf("  est un caractere special");
        getch();
}
