#include"librairies.h"

int isNumeric(char x)
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

int isNinExist(char nin[])
{
    FILE *f = fopen("FClients.txt","rb");
    CLIENT c;
    rewind(f);
    while(fread(&c,sizeof(CLIENT),1,f) != 0)
    {
        if(strcmp(c.nin,nin) == 0)
            return 1;
    }
    fclose(f);
    return 0;
}

int isPhoneExist(char phone[])
{
    FILE *f = fopen("FClients.txt","rb");
    CLIENT c;
    rewind(f);
    while(fread(&c,sizeof(CLIENT),1,f) != 0)
    {
        if(strcmp(c.telephone,phone) == 0)
            return 1;
    }
    fclose(f);
    return 0;
}

int menu1(void)
{
    int choix;
    do
    {
        puts("MENU PRINCIPAL");
        puts("1. CREATION DE COMPTE");
        puts("2. DETAIL D'UN COMPTE");
        puts("3. TOUS LES COMPTES");
        puts("4. OPERATION SUR UN COMPTE");
        puts("5. TOUTES LES OPERATIONS");
        puts("6. FERMER UN COMPTE");
        puts("7. QUITTER");
        puts("Faites votre choix !");
        scanf("%d",&choix);
    }
    while(choix<1 || choix>7);
    FLUSH
    return choix;
}

int menu2(void)
{
    int choix;
    do
    {
        puts("MENU");
        puts("1. VERSEMENT");
        puts("2. RETRAIT");
        puts("3. VIREMENT");
        puts("4. RETOUR AU MENU PRINCIPAL");
        puts("Faites votre choix !");
        scanf("%d",&choix);
    }
    while(!(choix==1 || choix==2 || choix==3));
    FLUSH;
    return choix;
}

CLIENT scanClient(void)
{
    CLIENT cl, client;
    char reponse;
    FILE *f = fopen("FClients.txt","ab");
    do
    {
        puts("Donner votre NIN");
        gets(cl.nin);
    }
    while(!(strlen(cl.nin)==5 && isStringNumeric(cl.nin)==1));
    if(isNinExist(cl.nin) == 1)
    {
        client = getClient(cl.nin);
        printf("Salut, %s %s\n",client.nom,client.prenom);
        puts("Voulez-vous creer un autre compte ? [O/N]");
        reponse = getchar();
        if(reponse == 'O' || reponse == 'o')
            return client;
    }
    else
    {
        puts("Donner votre nom");
        gets(cl.nom);
        strcpy(cl.nom,strupr(cl.nom));
        puts("Donner votre prenom");
        gets(cl.prenom);
        cl.prenom[0] = toupper(cl.prenom[0]);
        do
        {
            puts("Donner votre numero de telephone");
            gets(cl.telephone);
        }
        while(!(isPhoneValid(cl.telephone)==1 && isPhoneExist(cl.telephone)==0));
        puts("Donner votre adresse");
        gets(cl.adresse);
        cl.etat = 1;
        fwrite(&cl,sizeof(CLIENT),1,f);
        fclose(f);
        PAUSE
        CLS
        return cl;
    }
}

void printClient(CLIENT cl)
{
    printf("NIN : %s\n",cl.nin);
    printf("NOM : %s\n",cl.nom);
    printf("PRENOM : %s\n",cl.prenom);
    printf("TELEPHONE : %s\n",cl.telephone);
    printf("ADRESSE : %s\n",cl.adresse);
}

CLIENT getClient(char nin[])
{
    FILE *f = fopen("FClients.txt","rb");
    CLIENT c;
    rewind(f);
    while(fread(&c,sizeof(CLIENT),1,f) == 1)
    {
        if(strcasecmp(c.nin,nin) == 0)
        {
            return c;
        }
    }
    fclose(f);
}

DATE dateHeureSystem(void)
{
    DATE date;
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    date.j = local->tm_mday;
    date.m = local->tm_mon+1;
    date.a = local->tm_year+1900;
    date.h = local->tm_hour;
    date.mn = local->tm_min;
    date.s = local->tm_sec;
    return date;
}

void printDate(DATE date, char msg[])
{
    printf("%s : %d-%d-%d %c %d:%d:%02d\n",
           msg,date.j,date.m,date.a,133,date.h,date.mn,date.s);
}

int searchCompte(char numero[])
{
    FILE *f = fopen("FComptes.txt","rb");
    COMPTE c;
    rewind(f);
    while(fread(&c,sizeof(COMPTE),1,f) == 1)
    {
        if(strcasecmp(c.numCpte,numero) == 0)
        {
            return 1;
        }
    }
    fclose(f);
    return 0;
}


COMPTE createCompte(void)
{
    COMPTE c;
    FILE *f = fopen("FComptes.txt","ab");
    fseek(f,0,SEEK_END);
    sprintf(c.numCpte,"WPB-%05d",(ftell(f)/sizeof(COMPTE))+1);
    c.dateCreation = dateHeureSystem();
    c.solde = FOND_DE_CAISSE;
    c.client = scanClient();
    c.etat = 1;
    fwrite(&c,sizeof(COMPTE),1,f);
    fclose(f);
    return c;
}

COMPTE getCompte(char numero[])
{
    FILE *f = fopen("FComptes.txt","rb");
    COMPTE c;
    rewind(f);
    while(fread(&c,sizeof(COMPTE),1,f) == 1)
    {
        if(strcasecmp(c.numCpte,numero) == 0)
        {
            return c;
        }
    }
}

void printCompte(char numero[])
{
    FILE *f = fopen("FComptes.txt","rb");
    COMPTE c;
    rewind(f);
    if(searchCompte(numero) == 0)
        printf("Ce compte(%s) est inexistant !\n",numero);
    else if(getCompte(numero).etat == 0)
        printf("D%csol%c ce compte(%s) est ferm%c !\n",130,130,numero,130);
    else
    {
        while(fread(&c,sizeof(COMPTE),1,f) == 1)
        {
            if(strcasecmp(c.numCpte,numero) == 0 && c.etat == 1)
            {
                printf("Ce compte appartient %c %s %s [NIN: %s et TELEPHONE: %s]\n",
                       133,c.client.prenom,c.client.nom,
                       c.client.nin,c.client.telephone);
                printDate(c.dateCreation, "Date de Creation");
                printf("Solde : %d FCFA\n",c.solde);
                if(c.etat == 1)
                    printf("Etat : ACTIF\n");
                else
                    printf("Etat : FERME\n");
                break;

            }
        }
        fclose(f);
    }
    PAUSE
    CLS
}

void printAllComptes(void)
{
    FILE *f = fopen("FComptes.txt","rb");
    COMPTE c;
    rewind(f);
    while(fread(&c,sizeof(COMPTE),1,f) == 1)
    {
        printf("NUMERO DE COMPTE : %s\n",c.numCpte);
        printDate(c.dateCreation, "DATE DE CREATION");
        printf("SOLDE : %d FCFA\n",c.solde);
        printf("------------------------------------\n");
        puts("PROPRIETAIRE DU COMPTE");
        printClient(c.client);
        printf("------------------------------------\n");
        switch(c.etat)
        {
        case 0:
            puts("ETAT : FERME");
            break;
        case 1:
            puts("ETAT : ACTIF");
            break;
        }
        puts("");
        printf("***************************************\n");
    }
    fclose(f);
    PAUSE
    CLS
}

int verifSolde(char numero[])
{
    return (searchCompte(numero) == 1 && getCompte(numero).solde > FOND_DE_CAISSE) ? getCompte(numero).solde - FOND_DE_CAISSE : 0;
}

int versement(char numero[], int montant)
{
    FILE *f = fopen("FComptes.txt","rb");
    FILE *fo = fopen("FOperations.txt","ab");
    COMPTE c;
    OPERATION op;
    rewind(f);
    int ok=0;
    while(fread(&c,sizeof(COMPTE),1,f) == 1)
    {
        if(strcasecmp(c.numCpte,numero) == 0 && getCompte(numero).etat == 1)
        {
            c.solde += montant;
            fseek(f, -sizeof(COMPTE), SEEK_CUR);
            fwrite(&c,sizeof(COMPTE),1,f);
            fseek(fo,0,SEEK_END);
            sprintf(op.numOp,"WPB_OP-%03d",(ftell(fo)/sizeof(OPERATION))+1);
            op.compte = c;
            op.dateOp = dateHeureSystem();
            op.etat = 1;
            op.montant = montant;
            op.typeOp = 1;
            fwrite(&op,sizeof(OPERATION),1,fo);
            ok = 1;
            break;
        }
    }
    fclose(f);
    fclose(fo);
    return ok;
}
int retrait(char numero[], int montant)
{
    FILE *f = fopen("FComptes.txt","rb");
    FILE *fo = fopen("FOperations.txt","ab");
    COMPTE c;
    OPERATION op;
    rewind(f);
    int ok=0;
    while(fread(&c,sizeof(COMPTE),1,f) == 1)
    {
        if(strcasecmp(c.numCpte,numero) == 0 && getCompte(numero).etat == 1)
        {
            c.solde -= montant;
            fseek(f, -sizeof(COMPTE), SEEK_CUR);
            fwrite(&c,sizeof(COMPTE),1,f);
            fseek(fo,0,SEEK_END);
            sprintf(op.numOp,"WPB_OP-%03d",(ftell(fo)/sizeof(OPERATION))+1);
            op.compte = c;
            op.dateOp = dateHeureSystem();
            op.etat = 1;
            op.montant = montant;
            op.typeOp = 1;
            fwrite(&op,sizeof(OPERATION),1,fo);
            ok = 1;
            break;
        }
    }
    fclose(f);
    fclose(fo);
    return ok;
}

int virement(char[], char[], int);

int fermerCompte(char numero[])
{
    FILE *f = fopen("FComptes.txt","rb");
    COMPTE c;
    rewind(f);
    int ok=0;
    while(fread(&c,sizeof(COMPTE),1,f) == 1)
    {
        if(strcasecmp(c.numCpte,numero) == 0)
        {
            c.etat = 0;
            fseek(f, -sizeof(COMPTE), SEEK_CUR);
            fwrite(&c,sizeof(COMPTE),1,f);
            ok = 1;
            break;
        }
    }
    fclose(f);
    return ok;
}

void printOperation(char[]);
void printAllOperations(char[]);
