#include<stdio.h>
main()
{
    char lettre;

    printf("donner un caractere " );
    scanf("%c",&lettre);

    if(lettre>= 'a' && lettre<= 'z')
        printf("la lettre inverse est  %c",toupper(lettre));

     if(lettre>= 'A' && lettre<= 'Z')//if(islower)
        //car -=-32
        printf("la lettre inverse est  %c",tolower(lettre));

        printf("\n ***** Attention: c est ne pas une lettre ******* \n");
        getch();
}
