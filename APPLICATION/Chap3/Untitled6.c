#include<stdio.h>
main()
{
    char ar;

    printf("donner une lettre");
    scanf("%c",&ar);

    if(ar>='a' && ar<='z')
       printf("la lettre est %c",toupper(ar));
        else if (ar>='A' && ar<='Z')
        printf("la lettre est %c",tolower(ar));
}






