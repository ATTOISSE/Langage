#include"biblio.h"

int cpt_user=0,cpt_cat=0,finMontant=0,nbPro=0;




void gotoxy(int i, int j)
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c;

    c.X=i;
    c.Y=j;
    SetConsoleCursorPosition(h,c);
}

/*void color(int col)
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,(WORD)col);
}*/


void connexion()
{
    printf("\n\t\t\t\t****************************************");
    printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
    puts("\t\t\t\t\t\t VEUILLEZ VOUS CONNECTER S'IL VOUS PLAIT !!!\n");
    printf("\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
    printf("\n\t\t\t\t****************************************");

    pause


    system("mode con LINES=39 COLS=170");
    FILE *fichuser = NULL;
    char login[30],mdp[30],okLogin[20],verife[20];
    int m;
    int trouve=0;

    do
    {
        cls
        printf("\n\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°° LA PARTIE CONNEXION °°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²² LOGIN :                                              ²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²² MOT DE PASSE :                                       ²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²²°°°°°°                                      °°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");

        //les deux gotoxy pour l'emplacement du curseur
        gotoxy(50,5);
        gets(login);
        gotoxy(60,8);
        gets(mdp);
        fichuser = fopen("USERS","rb");
        if(fichuser)
        {
            while(fread(&Users,sizeof(Users),1,fichuser),!feof(fichuser))
            {
                if(strcasecmp(Users.login,login)==0&&strcasecmp(Users.mdp,mdp)==0)
                {

                    strcpy(Session.nom,Users.nom);
                    strcpy(Session.prenom,Users.prenom);
                    strcpy(Session.tel,Users.tel);
                    strcpy(Session.mdp,Users.mdp);
                    strcpy(Session.login,Users.login);
                    trouve=1;
                    if(Users.etat == 0)
                    {
                        nouveau_mdp();
                    }

                    pause

                    if(strcasecmp(Users.fonct,"UTILISATEUR")==0)
                    {

                        menu();
                    }
                    else
                    {
                        menuPrincipal();
                    }

                }
            }

            if(trouve==0)
            {
                gotoxy(75,11);
                printf("LOGIN OU MOT DE PASSE INCORRECT");
                gotoxy(72,14);
                pause
            }
        }
        fclose(fichuser);

    }
    while(trouve!=1);
}

void deconnexion()
{
    printf("\n\t\t\t\t*************************************************************");
    printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
    puts("\n\n\n\n\n\n\n \t\t\t\t VEUILLEZ VOUS CONNECTER S'IL VOUS PLAIT !!!\n\n\n");
    printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
    printf("\n\t\t\t\t*************************************************************");

    pause
    system("mode con LINES=39 COLS=170");
    FILE *fichuser = NULL;
    char login[30],mdp[30],okLogin[20],verife[20];
    int trouve=0;


    do
    {
        cls
        printf("\n\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°° PAGE DE CONNEXION °°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²² LOGIN :                                              ²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²² MOT DE PASSE :                                       ²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²²°°°°°°                                      °°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");

        gotoxy(50,5);
        gets(login);
        gotoxy(60,8);
        gets(mdp);
        fichuser = fopen("USERS","rb");
        if(fichuser)
        {
            while(fread(&Users,sizeof(Users),1,fichuser),!feof(fichuser))
            {
                if(strcasecmp(Users.login,login)==0&&strcasecmp(Users.mdp,mdp)==0)
                {

                    strcpy(Session.nom,Users.nom);
                    strcpy(Session.prenom,Users.prenom);
                    strcpy(Session.tel,Users.tel);
                    strcpy(Session.mdp,Users.mdp);
                    strcpy(Session.login,Users.login);
                    trouve=1;
                    nouveau_mdp();
                    Users.etat =1;
                    pause

                    if(strcasecmp(Users.fonct,"UTILISATEUR")==0)
                    {

                        menu();
                    }
                    else
                    {
                        menuPrincipal();
                    }

                }
            }

            if(trouve==0)
            {
                gotoxy(75,11);
                printf("LOGIN OU MOT DE PASSE INCORRECT");
                gotoxy(72,14);
                pause
            }
        }
        fclose(fichuser);
    }
    while(trouve!=1);
}



//______________________________________________________________________________________________________
//creation du nouveau mot de passe
void nouveau_mdp()
{
    FILE *fichuser = NULL;
    char mdp[20],confirme[20],rev[20];
    int j,i,t;
    fichuser = fopen("USERS","r+b");
    if(fichuser)
    {
        while(fread(&Users,sizeof(Users),1,fichuser),!feof(fichuser))
        {
            if(strcasecmp(Users.login,Session.login)==0&&strcasecmp(Users.mdp,Session.mdp)==0)
            {
                break;
            }
        }
        cls
        gotoxy(65,8);
        printf("\n\t\t\t\t*********************************************************************************************************");
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t  ²²² BIENVENUE DANS VOTRE PREMIERE CONNECTION *%s %s* VEUILLEZ VOUS CHANGER VOTRE MOT DE PASSE PLEASE!!! ²²²",Session.prenom,Session.nom);
        printf("\n\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
        printf("\n\t\t\t\t**********************************************************************************************************");
        gotoxy(72,25);
        pause
        do
        {
            cls
            printf("\n\t\t\t\t\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²°°°°°°°°°°°°°°°MODIFIER LE MOT DE PASSE!!!! °°°°°°°°°°²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*²²²");
            printf("\n\t\t\t\t\t\t\t\t²²² NOUVEAU MOT DE PASSE :                               ²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²°-----------------------------------------------------²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*²²²");
            printf("\n\t\t\t\t\t\t\t\t²²² CONFIRMATION :                                       ²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²                                                      ²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°²²²");
            printf("\n\t\t\t\t\t\t\t\t²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
            gotoxy(91,5);
            do{
                  gotoxy(91,5);
            gets(mdp);
            if(strlen(mdp)<8)
            {

                puts("\t\t\t\t\t\t\t\t\t LE MOT DE PASSER DOIT AVOIR AU MOINS 8 CARACTERE \n");


            }
            }while(strlen(mdp)<8);
            gotoxy(83,8);
            gets(confirme);
            j=0;
            t=strlen(mdp);
            rev[t]='\0';
            for(i=t-1; i>=0; i--)
            {
                rev[j++]=mdp[i];
            }
            rev[i]='\0';

            if(strcasecmp(Session.mdp,mdp)==0)
            {
                gotoxy(70,10);
                printf("LE MOT DE PASSE DOIT ETRE DIFFERENT DU PRECEDENT.");
                gotoxy(94,16);
                pause
            }
            else if(strcasecmp(mdp,confirme)!=0)
            {
                gotoxy(85,10);
                printf("CONFIRMATION INCORRECT");
                gotoxy(60,16);
                pause
            }

        }
        while(strcasecmp(Session.mdp,mdp)==0||strcasecmp(mdp,confirme)!=0);

        //fseek: Cette fonction permet d'effectuer la position du pointeur de fichier.
        fseek(fichuser,-1l*sizeof(Users),SEEK_CUR);
        Users.mdp[0]='\0';
        strcpy(Users.mdp,rev);
        Users.etat = 1;
        fwrite(&Users,sizeof(Users),1,fichuser);
        gotoxy(60,16);
        printf("MOT DE PASSE MODIFIER AVEC SUCCES %s",Users.mdp);
        gotoxy(60,19);
        pause
    }
    fclose(fichuser);
    //menuPrincipal();
}



int isNumeric(char x[])
{
    return (x>='0' && x<='9') ? 1 : 0;
}

int isStringNumeric(char x[])
{
    int i;
    for(i=0; i<strlen(x); i++)
    {
        if(isNumeric(x[i]) == 0)
            return 0;
    }
    return 1;
}

int isNetworkValid(char x[])
{
    return (x[0]=='7' && (x[1]=='5' || x[1]=='6' || x[1]=='7' || x[1]=='8' ||x[1]=='0')) ? 1 : 0;
}

int isPhoneValid(char tel[])
{
    return (strlen(tel) == 9 && isStringNumeric(tel) == 1 && isNetworkValid(tel)==1) ? 1 : 0;
}



//_____________________________________________________________________________________________________
//fonction ajouter un utilisateur

void ajoutUser()
{
    cls
    FILE *fichuser = NULL;
    char nom[20],prenom[20],tmplg[20];
    int taille = 0,trouve = 0,i,trouv = 0,choix;
    do
    {
        vider
        pause
        cls
        puts("\n -----------VEUILLEZ VOUS AJOUTER S'IL VOUS PLAIT ---------\n");
        trouve = 0;

         do
            {
                vider
                printf("\n-------------FONCTION---------\n");
                printf("\n1 ..........UTILISATEUR ADMIN\n");
                printf("2 ..........UTILISATEUR SIMPLE\n");
                printf("choix :");
                scanf("%d",&choix);
                switch(choix)
                {
                case 1:
                {
                    strcpy(Users.fonct,"ADMIN");
                    break;
                }
                case 2:
                {
                    strcpy(Users.fonct,"UTILISATEUR");
                    break;
                }
                default:
                {
                    printf("\nCHOIX INVALIDE\n");
                }
                }
            }
            while(choix!=1&&choix!=2);
            vider

        puts("ENTRER LE NOM:");
        gets(nom);
        taille = strlen(nom);
        if(taille<3)
        {
            printf("\nLE NOM DOIT AVOIR AU MOINS 3 CARACTERES ALPHABETIQUES.\n");
            trouve = 2;
        }
        else
        {

            for(i=0; i<taille; i++)
            {
                if(nom[i]>='a'&&nom[i]<='z')
                {

                    if(nom[i]!=toupper(nom[i]))
                    {
                        trouve = 1;
                    }
                }
            }
            if(trouve==1)
            {
                printf("\nLE NOM DOIT ETRE TOUT EN MAJUSCULE\n");
            }
        }
    }
    while(trouve != 0);

    do
    {

        vider

        trouve = 0;
        puts("ENTRER LE PRENOM:");
        gets(prenom);
        taille = strlen(prenom);
        if(taille<2)
        {
            printf("\nLE PRENOM DOIT AVOIR AU MOINS 2 CARACTERES ALPHABETIQUES.\n");
            trouve = 2;
        }
        else
        {

            for(i=0; i<taille; i++)
            {
                if(prenom[i]>='a'&&prenom[i]<='z')
                {
                    if(prenom[0]!=toupper(prenom[0]) && prenom[1]!=toupper(prenom[1]))
                    {
                        trouve = 1;
                    }
                }
            }
            if(trouve==1)
            {
                printf("\nLES 2 PREMIERS CARACTERE DU PRENOM DOIT ETRE EN MAJUSCULE\n");
            }
        }
    }
    while(trouve != 0);
//fichier lecture en mode binaire
    fichuser = fopen("USERS","rb");
    if(fichuser)
    {
        while(fread(&Users,sizeof(Users),1,fichuser),!feof(fichuser))
        {
            if(strcasecmp(Users.nom,nom)==0 && strcasecmp(Users.prenom,prenom)==0)
            {
                trouv = 1;
                break;
            }
        }
    }
    fclose(fichuser);

    if(trouv == 0)
    {
        //fichier ajouter en mode binaire
        fichuser = fopen("USERS","ab");
        if(fichuser)
        {
            vider
            Users.nbreElement++;
            Users.id = Users.nbreElement;
            strcpy(Users.nom,nom);
            strcpy(Users.prenom,prenom);
            fseek(fichuser,-1l*sizeof(Users),SEEK_CUR);


            do
            {
                puts("Donner votre numero de telephone");
                gets(Users.tel);
            }
            while(!(isPhoneValid(Users.tel)==1));

            sprintf(tmplg,"%c%c%c%c%c",Users.prenom[0],Users.prenom[1],Users.nom[0],Users.nom[1],Users.nom[2]);
            strcpy(Users.mdp,"passer123");
            strcpy(Users.login,tmplg);
            cpt_user ++;
            Users.etat =0 ;
            strcpy(Users.bloque,"OPENED");
            fwrite(&Users,sizeof(Users),1,fichuser);
            Users.etat=1;
        }
        fclose(fichuser);

    }
    else
    {
        printf("\nCet utilisateur existe deja dans le systeme\n");
    }
}


void listUsers()
{
    cls
    FILE *fichuser = NULL;
    fichuser = fopen("USERS","rb");
    if(fichuser)
    {

        while(fread(&Users,sizeof(Users),1,fichuser),!feof(fichuser))
        {

            printf("\n--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--* \n");
            printf("\tID\t|\tNOM\t|\tPRENOM\t|\tTELEPHONE\t|\tLOGIN\t|\tFONCTION\t|\tETAT\t|\n%9d%20s%17s%19s%20s%20s%20s\n",Users.id,Users.nom,Users.prenom,Users.tel,Users.login,Users.fonct,Users.bloque);
            printf("\n--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--* \n");

        }
    }
    fclose(fichuser);
}

void ajoutArticle()
{
    cls
    FILE *fichcat = NULL;
    FILE *fichpro = NULL;
    FILE *test = NULL;

    char tmpCat[20];
    char tmpPro[20],temps[20],code[20];
    int trouve = 0,verifie = 0,trv = 0;
    int choix;
    do
    {
        vider
        cls
        printf("\n1 --------- METTRE A JOUR UN PRODUIT\n");
        printf("\n2 ......... AJOUTER UN NOUVEAU PRODUIT\n");
        printf("choix : ");
        scanf("%d",&choix);
        if(choix == 2)
        {
            printf("\n~~~~~~~~~~~~~~~~- NOUVEAU PRODUIT ~~~~~~~~~~~~~~~~\n");
            vider
            printf("entrer la categorie du produit:");
            gets(tmpCat);
            fichcat = fopen("CATEGORIES","rb");
            if(fichcat)
            {
                while(fread(&categori,sizeof(categori),1,fichcat),!feof(fichcat))
                {
                    if(strcasecmp(categori.libelle,tmpCat)==0)
                    {
                        verifie = 1;
                        break;
                    }
                }
                if(verifie == 1)
                {
                    puts("entrer la designation du produit:");
                    gets(tmpPro);
                    fichpro = fopen("PRODUITS","rb");
                    if(fichpro)
                    {
                        while(fread(&article,sizeof(article),1,fichpro),!feof(fichpro))
                        {
                            if(strcasecmp(article.designation,tmpPro)==0)
                            {
                                trv = 1;
                                break;
                            }
                        }
                    }
                    fclose(fichpro);

                    if(trv == 0)
                    {
                        fichpro = fopen("PRODUTS","ab");
                        if(fichpro)
                        {
                            strcpy(temps,__DATE__);
                            strcpy(article.dateAjout,temps);
                            strcpy(article.designation,tmpPro);
                            puts("Entrer le prix: ");
                            scanf("%d",&article.prix);
                            puts("Entrer la quantite;");
                            scanf("%d",&article.qteStock);
                            strcpy(article.categorie,tmpCat);
                            sprintf(article.code,"%c-%c%c%c",article.categorie[0],article.designation[0],article.designation[1],article.designation[2]);
                            fwrite(&article,sizeof(article),1,fichpro);
                        }
                        fclose(fichpro);
                    }
                    else
                    {
                        printf("\nCe produit existe deja\n");
                    }
                }
                else
                {
                    printf("\ncette categorie nexiste pas\n");
                }
            }
            fclose(fichcat);
        }
        else if(choix == 1)
        {
            puts("\n1 ~~~~~~~~~~~~ METTRE A JOUR UN PRODUIT~~~~~~~~~~~~~~~~~\n");
            vider
            puts("Entrer le code du produit:");
            gets(code);
            fichpro = fopen("PRODUTS","r+b");
            if(fichpro)
            {
                while(fread(&article,sizeof(article),1,fichpro),!feof(fichpro))
                {
                    if(strcasecmp(article.code,code)==0)
                    {
                        printf("NOM DU PRODUIT : %s \n",article.designation);
                        trv = 1;
                        fseek(fichpro,-1l*sizeof(article),SEEK_CUR);
                        puts("entrer le nouveau prix du produit: ");
                        scanf("%d",&article.prix);
                        puts("entrer la nouvelle quantite:");
                        scanf("%d",&article.qteStock);
                        fwrite(&article,sizeof(article),1,fichpro);
                        printf("\nCE PRODUIT A ETE MIS A JOUR AVEC SUCCES\n");
                        break;
                    }
                }
            }
            fclose(fichpro);
            if(trv ==0)
            {
                printf("\n LE CODE DU PRODUIT INCORRECT !!!!\n");
            }

        }
        else
        {
            printf("\nCHOIX INVALIDE\n");
        }
        vider
    }
    while(choix!=1&&choix!=2);
}

void etatJournalier()
{
    cls
    char genere[50];
    FILE* F;
    F = fopen("etat.txt","a");
    fprintf(F,"NOMBRE TOTAL DE PRODUITS VENDUS : %d \t MONTANT JOURNALIER : %d \t",nbPro,finMontant);
    fclose(F);

//genere l'etat du jour
    system("start etat.txt");
}

void listProduits()
{
    cls
    FILE *fichpro = NULL;
    fichpro = fopen("PRODUTS","rb");
    if(fichpro)
    {
        while(fread(&article,sizeof(article),1,fichpro),!feof(fichpro))
        {
            printf("\n\t**************************************************************************************************************************************\n");
            printf("\tCODE: %s |\tDESIGNATION: %s |\tPRIX: %d |\tQUANTITE: %d |\tCATEGORIE: %s |\tDATE D'AJOUT: %s |",article.code,article.designation,article.prix,article.qteStock,article.categorie,article.dateAjout);
            printf("\n\t**************************************************************************************************************************************\n\n");
        }
    }
    fclose(fichpro);
}

void ajoutCategorie()
{
    cls
    FILE *fichcat = NULL;
    int trouve =0;
    char cat[20];
    vider
    puts("Entrer  le libelle");
    gets(cat);
    fichcat = fopen("CATEGORIES","rb");
    if(fichcat)
    {
        while(fread(&categori,sizeof(categori),1,fichcat),!feof(fichcat))
        {
            if(strcasecmp(categori.libelle,cat)==0)
            {
                trouve = 1;
                break;
            }
        }
    }
    fclose(fichcat);
    if(trouve == 0)
    {
        fichcat = fopen("CATEGORIES","ab");
        if(fichcat)
        {
            vider
            strcpy(categori.libelle,cat);
            categori.nbr_Element++;
            categori.id = categori.nbr_Element;
            categori.liste = 1;
            fwrite(&categori,sizeof(categori),1,fichcat);
        }
        fclose(fichcat);

    }
    else
    {
        printf("\ncette categorie existe deja\n");
    }
}

//________________________________________________________________________________________________________
//fontion pour lister une catégorie
void listCategories()
{
    cls
    FILE *fichcat = NULL;
    fichcat = fopen("CATEGORIES","rb");
    if(fichcat)
    {
        while(fread(&categori,sizeof(categori),1,fichcat),!feof(fichcat))
        {
            printf("\n****************************************************\n");
            printf("ID : %d\t\tLIBELLE : %s",categori.id,categori.libelle);
            printf("\n****************************************************\n");
        }
    }
    fclose(fichcat);
}
void Vente()
{
    cls
    FILE *fichpro = NULL;
    char tmp[30],numero[100],dt[20],ts[20],facture[100],genere[100];
    char code[20],rep,rep1;
    int qt,i,somme,Som,nb,N =0,verif=0;
    FILE* Fich,*F;

    vente.nbreElement++;
    vente.id = vente.nbreElement;
    strcpy(dt,__DATE__);
    strcpy(ts,__TIME__);
    sprintf(facture,"RECU_%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c_%s_%d.txt",dt[7],dt[8],dt[9],dt[10],dt[0],dt[1],dt[2],dt[4],dt[5],ts[0],ts[1],ts[3],ts[4],ts[6],ts[7],Session.login,vente.id);
    printf("\n%s\n",facture);
    sprintf(numero,"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c_%s_%d",dt[7],dt[8],dt[9],dt[10],dt[0],dt[1],dt[2],dt[4],dt[5],ts[0],ts[1],ts[3],ts[4],ts[6],ts[7],Session.login,vente.id);
    printf("\n%s\n",numero);
    Fich = fopen(facture,"a");
    fprintf(Fich,"\n----------------------------- INFOS UTILISATEURS CONNECTE ---------------------------------\n\n");
    fprintf(Fich,"\nNOM :  %s\tPRENOM : %s\tTELEPHONE : %s\n",Session.nom,Session.prenom,Session.tel);
    fprintf(Fich,"\n-----------------------------------------------------------------------------------------------\n\n");
    fprintf(Fich,"\n------------------------------ LISTE DES PRODUITS ----------------------------------------\n\n");

    do
    {
        vider
        puts("Entrer le code du produit :");
        gets(code);
        vider
        fichpro = fopen("PRODUTS","r+b");
        if(fichpro)
        {
            while(fread(&article,sizeof(article),1,fichpro),!feof(fichpro))
            {
                if(strcasecmp(article.code,code)==0)
                {
                    vider
                    puts("Entrer la quatite a vendre :");
                    scanf("%d",&qt);
                    vider
                    verif = 1;
                    if(article.qteStock==0)
                    {
                        printf("\nProduits en rupture de stock\n");
                        break;
                    }
                    else if(article.qteStock<qt)
                    {
                        somme = 0;
                        nb = 0;
                        printf("\nIL  EN RESTE  %d EN STOCK...VOULEZ VOUS PRENDRE CETTE QUANTITE ?[O/N]\n",article.qteStock);
                        scanf("%c",&rep);
                        if(rep=='n'||rep=='N')
                        {
                            break;
                        }

                    }
                    else
                    {
                        somme = 0;
                        nb = 0;
                        somme = article.prix*qt;
                        Som = Som + somme;
                        nb = qt;
                        N = N + nb;
                        fprintf(Fich,"CODE: %s  LIBELLE: %s  CATEGORIE: %s  PRIX: %d  QUANTITE: %d  DATE AJOUT: %s\n\n",article.code,article.designation,article.categorie,article.prix,qt,article.dateAjout);
                        fseek(fichpro,-1l*sizeof(article),SEEK_CUR);
                        article.qteStock = article.qteStock - qt;
                        fwrite(&article,sizeof(article),1,fichpro);
                        break;

                    }
                }



            }

        }
        fclose(fichpro);
        if(verif==0)
            puts("le code est incorrect");
        vider
        puts("VOULEZ VOUS AJOUTER UN AUTRE PRODUIT ? [O/N]");
        scanf("%c",&rep1);
        if(rep1=='n' || rep1=='N')
        {
            break;
        }
        vider
    }
    while(rep1!='n' || rep1!='N');

    fprintf(Fich,"\n\n~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~\n\n");
    fprintf(Fich,"MONTANT TOTAL = %d\tNOMBRE PRODUITS : %d",Som,N);
    fprintf(Fich,"\n\n~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~\n\n");
    finMontant = finMontant + Som;
    nbPro = nbPro + N;
    fclose(Fich);

    sprintf(genere,"start %s",facture);
    system(genere);

}


void bloque_debloque_users()
{
    cls
    int choix,id,tv;
    FILE *fichuser = NULL;
    do
    {
        vider
        cls
        printf("\n******* UPDATE USERS *********\n");
        printf("\n1 ......... BLOQUER\n");
        printf("\n2 ......... DEBLOQUER\n");
        printf("choix :");
        scanf("%d",&choix);
        if(choix == 1)
        {
            tv =0;
            printf("entrer son ID: ");
            scanf("%d",&id);
            fichuser = fopen("USERS","r+b");
            if(fichuser)
            {
                while(fread(&Users,sizeof(Users),1,fichuser),!feof(fichuser))
                {
                    if(Users.id==id)
                    {
                        tv = 1;
                        if(strcasecmp(Users.fonct,"ADMIN")==0)
                        {
                            printf("\nc'est le super admin\n");
                            break;
                        }
                        if(Users.supAdmin ==0)
                        {
                            printf("NOM : %s\t\t PRENOM : %s\n",Users.nom,Users.prenom);
                            if(strcasecmp(Users.bloque,"CLOSED")!=0)
                            {
                                fseek(fichuser,-1l*sizeof(Users),SEEK_CUR);
                                strcpy(Users.bloque,"CLOSED");
                                fwrite(&Users,sizeof(Users),1,fichuser);
                                printf("\nUTILISATEUR BLOQUER AVEC SUCCES...\n");
                                break;
                            }

                            else
                            {
                                printf("\nUsers deja bloquer\n");
                                break;
                            }
                        }

                        break;
                    }
                }
                if(tv == 0)
                {
                    printf("\nCET IDENTIFIANT N'EXISTE PAS ...\n");
                }
            }
            fclose(fichuser);

        }
        else if(choix == 2)
        {
            tv=0;
            printf("entrer son ID: ");
            scanf("%d",&id);
            fichuser = fopen("USERS","r+b");
            if(fichuser)
            {
                while(fread(&Users,sizeof(Users),1,fichuser),!feof(fichuser))
                {
                    if(Users.id==id)
                    {
                        tv = 1;
                        if(Users.supAdmin ==0)
                        {
                            printf("NOM : %s\t\t PRENOM : %s\n",Users.nom,Users.prenom);
                            if(strcasecmp(Users.bloque,"OPENED")!=0)
                            {
                                fseek(fichuser,-1l*sizeof(Users),SEEK_CUR);
                                strcpy(Users.bloque,"OPENED");
                                fwrite(&Users,sizeof(Users),1,fichuser);
                                printf("\nUTILISATEUR DEBLOQUER AVEC SUCCES...\n");
                                break;
                            }
                            else
                            {
                                printf("\nUsers deja debloquer\n");
                                break;
                            }
                        }
                        else
                        {
                            printf("\nc'est le super admin\n");
                            break;
                        }
                    }
                }
                if(tv == 0)
                {
                    printf("\nCET IDENTIFIANT N'EXISTE PAS ...\n");
                }
            }
            fclose(fichuser);
        }
        else
        {
            printf("\nCHOIX INVALIDE\n");
        }

    }
    while(choix!=1&&choix!=2);
}



menu()
{

    cls
    pause

    int choix;
    char temps[20];
    system("mode con LINES=25 COLS=170");
    printf("\n\n\t\t\t\t\t\t\tBIENVENU(E) %s %s\n",Session.prenom,Session.nom);
    pause

    do
    {
        cls
        printf("\n\n\n\n\n\t\t\t\t\t\t\tUTILISATEUR CONNECTE(E) : %s %s\n",Session.prenom,Session.nom);
        printf("\n\t\t\t\t\t\t\t A %s LE %s \n",__TIME__,__DATE__);

        printf("\n\t\t\t\t\t\t\t**************** MENU D'UTILISATEUR ********************");

        printf("\n\t\t\t\t\t\t\t  1---------- LISTER LES CATEGORIES");

        printf("\n\t\t\t\t\t\t\t  2---------- LISTER LES PRODUITS ");

        printf("\n\t\t\t\t\t\t\t  3---------- EFFECTUER UNE VENTE ");

        printf("\n\t\t\t\t\t\t\t  4---------- IMPRIMER  L'ETAT DU JOUR ");

        printf("\n\t\t\t\t\t\t\t  5---------- FERMER LE PROGRAMME ");

        printf("\n\t\t\t\t\t\t\t  6-----------DECONNEXION ");

        printf("\n\t\t\t\t\t\t\t  ------------ FAITES VOTRE CHOIX:");
        scanf("%d",&choix);

        switch(choix)
        {

        case 1:
            listCategories();
            pause
            break;

        case 2:
            listProduits();
            pause
            break;
        case 3:
            pause
            vider
            Vente();
            break;
        case 4:
            etatJournalier();
            pause
            break;
        case 5:
            return 0;
            break;
        case 6:
            ajoutUser();
            deconnexion();
            break;
        default :
        {
            puts("choix invalide");
        }

        }
    }
    while(1);
}

menuPrincipal()
{
    cls
    pause


    system("mode con LINES=39 COLS=170");
    int choix;
    char temps[20];
    printf("\n\n\t\t\t\t\t\t\tBIENVENU(E) %s %s\n",Session.prenom,Session.nom);
    pause
    do
    {
        cls
        printf("\n\n\n\n\n\t\t\t\t\t\t\tUTILISATEUR CONNECTE(E) : %s %s\n",Session.prenom,Session.nom);
        printf("\n\t\t\t\t\t\t\t A %s LE %s",__TIME__,__DATE__);

        printf("\n\n\n\n");
        printf("\n\n\n\n\t\t\t\t\t\t\t____________________________________________________________");
        printf("\n\t\t\t\t\t\t\t**************** MENU PRINCIPALE ********************");


        printf("\n\t\t\t\t\t\t\t   1---------- Ajouter un utilisateur               ");

        printf("\n\t\t\t\t\t\t\t   2---------- Lister des utilisateur               ");

        printf("\n\t\t\t\t\t\t\t   3---------- Ajouter une categorie                ");

        printf("\n\t\t\t\t\t\t\t   4---------- Lister les categories                ");

        printf("\n\t\t\t\t\t\t\t   5---------- Ajouter un produit                   ");

        printf("\n\t\t\t\t\t\t\t   6---------- Lister les produits                  ");

        printf("\n\t\t\t\t\t\t\t   7---------- Effectuer une vente                  ");

        printf("\n\t\t\t\t\t\t\t   8---------- Imprimer  l'etat du jour             ");

        printf("\n\t\t\t\t\t\t\t   9----------Bloquer ou Debloquer un user          ");

        printf("\n\t\t\t\t\t\t\t   10---------- Fermer le programme");
        printf("\n\t\t\t\t\t\t\t   11----------Deconnecter ");
        printf("\n\t\t\t\t\t\t\t   Faites votre choix:");
        scanf("%d",&choix);


        switch(choix)
        {
        case 1 :
            ajoutUser();
            pause
            break;
        case 2:
            listUsers();
            pause
            break;
        case 3:
            ajoutCategorie();
            pause
            break;
        case 4:
            listCategories();
            pause
            break;
        case 5:
            ajoutArticle();
            pause
            break;
        case 6:
            listProduits();
            pause
            break;
        case 7:
            pause
            vider
            Vente();
            break;
        case 8:
            etatJournalier();
            pause
            break;
        case 9:
            bloque_debloque_users();
            pause
            break;
        case 10:
            return 0;
            break;
        case 11:
            ajoutUser();
            deconnexion();
            break;
        default :
        {
            printf("choix invalide");
        }
        }
    }
    while(1);
}

