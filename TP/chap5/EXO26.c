#include<stdio.h>
main()
{
    char t[4][254];

    int i,cpt=0;
    char rep;

    puts("pour poser une question tu met 'o' ou 'O' sinon met ce que tu veux");

    puts("remplissage du tableau");

    for(i=0;i<4;i++)
    {

        puts("Voulez vous poser des question");
        scanf("%c",&rep);
        fflush(stdin);
        if(rep=='O' || rep =='o')
        {
        puts("pose la");
        gets(t[i]);
        cpt++;
        }
        else
        {
            puts("merci!");
        }

        system("cls");
    }

    puts("le(s) question(s) posee(s) par le client est(sont)");

    for(i=0;i<cpt;i++)
    {
        printf("%s \n",t[i]);

    }


}
