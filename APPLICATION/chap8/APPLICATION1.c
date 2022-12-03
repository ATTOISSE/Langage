#include<stdio.h>

main()
{
   // FILE *f=fopen("test1.docx","r");
   char nomF[30];
   /*puts("Donner le nom du fichier");
   gets(nomF);
    FILE *f=fopen(nomF,"a");
    //FILE *f=fopen("test.txt","a");
    if(f!=NULL)//if(f)
        puts("OUVERTURE DU FICHIER REUSSIE");
    else
         puts("OUVERTURE DU FICHIER echoue");
    fclose(f);*/
    system("start test.txt");
    FILE *f=NULL;
    fopen(f,"W");

    puts("saisir un mot");
    gets(nomF);
    while(fread(&nomF,sizeof(nomF),1,f),!feof(f))
    {
                printf("%s",nomF);
    }

      fclose(f);
}
//DEFINITION DU STRUCTURE DEFINITION DES STRUCTURE ET DEFINITION DE MENU
